#include "persistencia.h"

list<ElementoResultado> ComandoSQL::listaResultado;

EErroPersistencia::EErroPersistencia(string pMensagem)
{
    this->mensagem = pMensagem;
}

string EErroPersistencia::what()
{
    return mensagem;
}

// Implementações de métodos da classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}

void ComandoSQL::executar()
{
    conectar();
    printf(comandoSQL.c_str());
    printf("a\n");

    rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
    printf("b\n");

    if (rc != SQLITE_OK)
    {
        sqlite3_free(mensagem);
        desconectar();
        throw EErroPersistencia("Erro na execucao do comando SQL");
    }
    desconectar();
}



void ComandoSQL::conectar()
{
    rc = sqlite3_open(bdFile, &bd);
    if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar()
{
    rc =  sqlite3_close(bd);
    if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}


ComandoCadastrarConta::ComandoCadastrarConta(Conta conta)
{
    comandoSQL = "INSERT INTO CONTA (NOME, EMAIL, SENHA) VALUES ('"+
                 conta.getNome().getValor()+"', '"+conta.getEmail().getValor()+"', '"+
                 conta.getSenha().getValor()+"');";
};

ComandoDeletarConta::ComandoDeletarConta(Texto email)
{
    comandoSQL = "DELETE FROM CONTA WHERE EMAIL = '" +
                 email.getValor()
                 +"';";
};


ComandoAtualizarConta::ComandoAtualizarConta(Conta conta)
{
    comandoSQL = "UPDATE CONTA ";
    comandoSQL += "SET NOME = '" + conta.getNome().getValor();
    comandoSQL += "', SENHA = '" + conta.getSenha().getValor();
    comandoSQL += "' WHERE EMAIL = '" + conta.getEmail().getValor()+"';";
};

ComandoConsultarConta::ComandoConsultarConta(Texto email)
{
    comandoSQL = "SELECT NOME, EMAIL, SENHA FROM CONTA WHERE EMAIL = ";
    comandoSQL += "'"+email.getValor()+"';";
};

Conta ComandoConsultarConta::getResultado()
{
    ElementoResultado resultado;
    Conta conta;

    // Remover nome;
    if (listaResultado.empty())
        throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    conta.setNome(Texto(resultado.getValorColuna()));

    // Remover email;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        conta.setEmail(Texto(resultado.getValorColuna()));

    // Remover senha;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        conta.setSenha(Texto(resultado.getValorColuna()));

    return conta;
}

/*
ComandoLerSenha::ComandoLerSenha(Email email)
    comandoSQL = "SELECT * FROM CONTA WHERE email = ";
    comandoSQL += senha.getValor();
};*/

//comando deletar conta

//comando atualizar conta

//comando consultar conta (SELECT)

//comando ler senha da conta (SELECT)
