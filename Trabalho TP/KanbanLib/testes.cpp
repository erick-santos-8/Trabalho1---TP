#include "testes.h"
#include <stdexcept>
#include <iostream>

//Dominios -------------------------------------------------------------------------------------------------------
//Métodos da classe TUCodigo

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
            cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TUCodigo::run(){

    cout << "Iniciando teste de unidade em classe Codigo..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe coluna

void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso(){
    try{
        coluna->setColuna(VALOR_VALIDO);
        if (coluna->getColuna() != VALOR_VALIDO)
            estado = FALHA;
            cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TUColuna::testarCenarioFalha(){
    try{
        coluna->setColuna(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (coluna->getColuna() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TUColuna::run(){

    cout << "Iniciando teste de unidade em classe Coluna..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUEmail

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
        cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TUEmail::run(){

    cout << "Iniciando teste de unidade em classe Email..." <<endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TULimite

void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;
}

void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso(){
    try{
        limite->setLimite(VALOR_VALIDO);
        if (limite->getLimite() != VALOR_VALIDO)
            estado = FALHA;
            cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TULimite::testarCenarioFalha(){
    try{
        limite->setLimite(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (limite->getLimite() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TULimite::run(){

    cout << "Iniciando teste de unidade em classe Limite..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUsenha

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
            cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TUSenha::run(){

    cout << "Iniciando teste de unidade em classe Senha..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe texto

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO);
        if (texto->getTexto() != VALOR_VALIDO)
            estado = FALHA;
            cout << "Teste de cenario valido foi bem-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "Teste de cenario valido foi mal-sucedido." << endl;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(VALOR_INVALIDO);
        estado = FALHA;
        cout << "Teste de cenario invalido foi mal-sucedido." << endl;
    }
    catch(invalid_argument &excecao){
        if (texto->getTexto() == VALOR_INVALIDO)
            estado = FALHA;
            cout << "Teste de cenario invalido foi bem-sucedido." << endl;
    }
}

int TUTexto::run(){

    cout << "Iniciando teste de unidade em classe Texto..." << endl;

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//Entidades ----------------------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenarioSucesso(){
    Texto nome;
    nome.setTexto(VALOR_VALIDO_TEXTO);
    conta->setNome(nome);
    if(conta->getNome().getTexto() != VALOR_VALIDO_TEXTO)
        estado = FALHA;

    Email email;
    email.setEmail(VALOR_VALIDO_EMAIL);
    conta->setEmail(email);
    if(conta->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;

    Senha senha;
    senha.setSenha(VALOR_VALIDO_SENHA);
    conta->setSenha(senha);
    if(conta->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

int TUConta::run(){
    cout << "Iniciando teste de unidade em entidade Conta..." << endl;
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUQuadro::setUp(){
    quadro = new Quadro();
    estado = SUCESSO;
}
void TUQuadro::tearDown(){
    delete quadro;
}

void TUQuadro::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    quadro->setCodigo(codigo);
    if(quadro->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Texto nome;
    nome.setTexto(VALOR_VALIDO_NOME);
    quadro->setNome(nome);
    if(quadro->getNome().getTexto() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Texto descricao;
    descricao.setTexto(VALOR_VALIDO_DESCRICAO);
    quadro->setDescricao(descricao);
    if(quadro->getDescricao().getTexto() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Limite limite;
    limite.setLimite(VALOR_VALIDO_LIMITE);
    quadro->setLimite(limite);
    if(quadro->getLimite().getLimite() != VALOR_VALIDO_LIMITE)
        estado = FALHA;
}
int TUQuadro::run(){
    cout << "Iniciando teste de unidade em entidade Quadro..." << endl;
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUCartao::setUp(){
    cartao = new Cartao();
    estado = SUCESSO;
}
void TUCartao::tearDown(){
    delete cartao;
}
void TUCartao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    cartao->setCodigo(codigo);
    if(cartao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Texto nome;
    nome.setTexto(VALOR_VALIDO_NOME);
    cartao->setNome(nome);
    if(cartao->getNome().getTexto() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Texto descricao;
    descricao.setTexto(VALOR_VALIDO_DESCRICAO);
    cartao->setDescricao(descricao);
    if(cartao->getDescricao().getTexto() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Coluna coluna;
    coluna.setColuna(VALOR_VALIDO_COLUNA);
    cartao->setColuna(coluna);
    if(cartao->getColuna().getColuna() != VALOR_VALIDO_COLUNA)
        estado = FALHA;
}
int TUCartao::run(){
    cout << "Iniciando teste de unidade em entidade Cartao..." << endl;
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
