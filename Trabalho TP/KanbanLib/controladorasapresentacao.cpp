#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementa��es de m�todos de classes controladoras.
void CntrApresentacaoControle::executar(){
// Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto5[]="3 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de sele��o de servi�o.

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Conta.";
    char texto8[]="2 - Projeto.";
    char texto9[]="3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: if(cntrAAutenticacao->autenticar(&email)){                         // Solicita autentica��o.
                        bool apresentar = true;                                                 // Controle de la�o.
                        while(apresentar){

                            // Apresenta tela de sele��o de servi�o.

                            CLR_SCR;                                                            // Limpa janela.

                            cout << texto6 << endl;                                             // Imprime nome do campo.
                            cout << texto7 << endl;                                             // Imprime nome do campo.
                            cout << texto8 << endl;                                             // Imprime nome do campo.
                            cout << texto9 << endl;                                             // Imprime nome do campo.

                            campo = getch() - 48;                                               // Leitura do campo de entrada e convers�o de ASCII.

                            switch(campo){
                                case 1: cntrAConta->executar(email);                 // Solicita servi�o de pessoal.
                                        break;
                                case 2: cntrAProjetos->executar();     // Solicita servi�o de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        CLR_SCR;                                                                // Limpa janela.
                        cout << texto10 << endl;                                                // Imprime mensagem.
                        getch();                                                                // Leitura de caracter digitado.
                    }
                    break;
            case 2: cntrAConta->criarConta();
                    break;
            case 3: apresentar = false;
                    break;
        }
    }
    return;
}
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

bool CntrIAAutenticacao::autenticar(Email *email){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o Email: ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){
        // Apresenta tela de autentica��o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            email->setEmail(string(campo1));                                                      // Atribui valor ao Email.
            senha.setSenha(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << texto3 << endl;                                                             // Informa formato incorreto.
            getch();                                                                            // L� caracter digitado.
        }
    }
    return (cntr->autenticar(*email, senha));                                                     // Solicita servi�o de autentica��o.
}

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

void CntrIAConta::executar(Email email){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Visualizacao.";
    char texto3[]="2 - Editar.";
    char texto4[]="3 - Excluir";
    char texto5[]="4 - Projeto";
    char texto6[]="5 - Retornar";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;
        cout << texto4 << endl;                                                                // Imprime nome do campo.
        cout << texto5 << endl;
        cout << texto6 << endl;

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarDadosPessoais();
                    break;
            case 2: editarDados();
                    break;
//            case 3: excluirConta();
//                    break;
            //case 4: cntrSProjetos->;//---------------------------------------------Ver como ir para a tela de projetos
                    //break;
            case 5: apresentar = false;
                    break;
        }
    }
//--------------------------------------------------------------
//Implementar esses metodo e Instanciar excluirConta().
//--------------------------------------------------------------
}


void CntrIAConta::editarDados(){
    char texto1[]="Selecione um dos servicos";
    char texto2[]="1 - Alterar Nome";
    char texto3[]="2 - Alterar Email";
    char texto4[]="3 - Alterar Senha";
    char texto5[]="4 - Retornar";
    char texto7[]="Digite um novo Nome: ";
    char texto8[]="Digite um novo Email: ";
    char texto9[]="Digite uma nova Senha: ";
    char texto10[]="Dados em formato incorreto. Digite algo.";

    int campo;
    char novoNome[80], nova[40];
    bool apresentar = true;
    while(apresentar){

        CLR_SCR;
        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;
        cout << texto4 << endl;                                                                // Imprime nome do campo.
        cout << texto5 << endl;

        campo = getch() - 48;
        apresentar = false;
//--------------------------------------------------------------
//Implementar esse metodo.
//--------------------------------------------------------------
    }
}


void CntrIAConta::criarConta(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome:";
    char texto5[] ="Email:";
    char texto6[] ="Senha:";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo4[80], campo5[80];                                                  // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Texto nome;
    Email email;
    Senha senha;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                   // Limpa janela.

    cout << texto1 << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << texto2 << " ";                                                                     // Imprime nome do campo.
    cin.getline(campo1,sizeof(campo1));                                                        // L� valor do campo composto.

    cout << "Valor lido " << campo1 << endl;

    cout << texto5 << " ";                                                                     // Imprime nome do campo.
    cin >> campo4;
                                                                            // L� valor do campo.
    cout << texto6 << " ";                                                                     // Imprime nome do campo.
    cin >> campo5;
                                                                            // L� valor do campo.

    try{
        nome.setTexto(string(campo1));
        email.setEmail(string(campo4));
        senha.setSenha(string(campo5));
    }
    catch(invalid_argument &exp){
        cout << texto10 << endl;                                                                // Informa formato incorreto.
        getch();                                                                                // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    Conta conta;

    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    // Cadastra usu�rio e conta.

    if(cntrSConta->criarConta(conta)){
        cout << texto11 << endl;                                                                    // Informa sucesso.
        getch();
        return;
    }

    cout << texto12 << endl;                                                                            // Informa falha.
    getch();

    return;
}

void CntrIAConta::consultarDadosPessoais(){

    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    char texto[] = "Digite algo para sair ";             // Mensagem a ser apresentada.
    char texto2[] = "Nome: ";
    char texto3[] = "Email: ";
    char texto4[] =  "Senha: ";

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                      // Imprime nome do campo.
    getch();

//--------------------------------------------------------------
//Implementar esse metodo.
//--------------------------------------------------------------

}

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

void CntrIAProjetos::executar(){
       // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Criar Quadro.";
    char texto3[] ="2 - Visualizar Quadro.";
    char texto4[] ="3 - Excluir Quadro.";
    char textoDivisor[] ="-------------------";
    char texto5[] ="4 - Criar Cartão.";
    char texto6[] ="5 - Visualizar Cartao.";
    char texto7[] ="6 - Mover Cartao.";
    char texto8[] ="7 - Excluir Cartao.";
    char texto9[] ="8 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << textoDivisor << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.
        cout << texto6 << endl;                                                                 // Imprime nome do campo.
        cout << texto7 << endl;                                                                 // Imprime nome do campo.
        cout << texto8 << endl;                                                                 // Imprime nome do campo.
        cout << texto9 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: criarQuadro();
                    break;
            case 2: visualizarQuadro();
                    break;
            case 3: eliminarQuadro();
                    break;
            case 4: criarCartao();
                    break;
            case 5: visualizarCartao();
                    break;
            case 6: moverCartao();
                    break;
            case 7: eliminarCartao();
                    break;
            case 8: apresentar = false;
                    break;
        }
//--------------------------------------------------------------
//Implementar esses metodos.
//--------------------------------------------------------------
    }
}

void CntrIAProjetos::criarQuadro(){
     //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::visualizarQuadro(){
 //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::eliminarQuadro(){
 //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::criarCartao(){
     //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::visualizarCartao(){
 //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::moverCartao(){
 //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}

void CntrIAProjetos::eliminarCartao(){
 //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir c�digo seguinte pela implementa��o do m�todo.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    // Mensagens a serem apresentadas.

    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.

    CLR_SCR;                                                                                    // Limpa janela.
    cout << texto << endl;                                                                      // Imprime nome do campo.
    getch();
}
