#ifndef CONTROLADORASAPRESENTACAO_CPP_INCLUDED
#define CONTROLADORASAPRESENTACAO_CPP_INCLUDED

#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementa��es de m�todos de classes controladoras.
/*void CntrApresentacaoControle::executar(){
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
*/
void CntrIAConta::executar(Texto email)
{

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Visualizacao.";
    char texto3[] = "2 - Editar.";
    char texto4[] = "3 - Excluir";
    char texto5[] = "4 - Projeto";
    char texto6[] = "5 - Retornar";

    int campo; // Campo de entrada.

    bool apresentar = true; // Controle de la�o.

    while (apresentar)
    {

        // Apresenta tela de sela��o de servi�o.

        CLR_SCR; // Limpa janela.

        cout << texto1 << endl; // Imprime nome do campo.
        cout << texto2 << endl; // Imprime nome do campo.
        cout << texto3 << endl;
        cout << texto4 << endl; // Imprime nome do campo.
        cout << texto5 << endl;
        cout << texto6 << endl;

        campo = getch() - 48; // Leitura do campo de entrada e convers�o de ASCII.

        switch (campo)
        {
        case 1:
            consultarDadosPessoais();
            break;
        case 2:
            editarDados();
            break;
            //            case 3: excluirConta();
            //                    break;
            // case 4: cntrSProjetos->;//---------------------------------------------Ver como ir para a tela de projetos
            // break;
        case 5:
            apresentar = false;
            break;
        }
    }
}

void CntrIAConta::criarConta()
{

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] = "Preencha os seguintes campos: ";
    char texto2[] = "Nome:";
    char texto5[] = "Email:";
    char texto6[] = "Senha:";
    char texto10[] = "Dados em formato incorreto. Digite algo.";
    char texto11[] = "Sucesso no cadastramento. Digite algo.";
    char texto12[] = "Falha no cadastramento. Digite algo.";

    char campo1[80], campo4[80], campo5[80]; // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Texto nome;
    Texto email;
    Texto senha;

    // Apresenta tela de cadastramento.

    CLR_SCR; // Limpa janela.

    cout << texto1 << endl;              // Imprime solicita��o ao usu�rio.
    cout << texto2 << " ";               // Imprime nome do campo.
    cin.getline(campo1, sizeof(campo1)); // L� valor do campo composto.

    cout << "Valor lido " << campo1 << endl;

    cout << texto5 << " "; // Imprime nome do campo.
    cin >> campo4;
    // L� valor do campo.
    cout << texto6 << " "; // Imprime nome do campo.
    cin >> campo5;
    // L� valor do campo.

    try
    {
        nome.setValor(string(campo1));
        email.setValor(string(campo4));
        senha.setValor(string(campo5));
    }
    catch (invalid_argument &exp)
    {
        cout << texto10 << endl; // Informa formato incorreto.
        getch();                 // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    Conta conta;

    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    // Cadastra usu�rio e conta.

    if (cntrSConta->criarConta(conta))
    {
        cout << texto11 << endl; // Informa sucesso.
        getch();
        return;
    }

    cout << texto12 << endl; // Informa falha.
    getch();

    return;
}

void CntrIAConta::excluirConta()
{

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] = "Preencha o e-mail da conta que deseja excluir: ";
    char texto5[] = "Email:";
    char texto10[] = "Dados em formato incorreto. Digite algo.";
    char texto11[] = "Sucesso no cadastramento. Digite algo.";
    char texto12[] = "Falha no cadastramento. Digite algo.";

    char campo4[80]; // Cria campos para entrada dos dados.

    // Instancia os dom�nios.

    Texto email;

    // Apresenta tela de cadastramento.

    CLR_SCR; // Limpa janela.

    cout << texto1 << endl; // Imprime solicita��o ao usu�rio.
    cout << texto5 << " ";  // Imprime nome do campo.
    cin >> campo4;
    cout << "Valor lido " << campo4 << endl;
    // L� valor do campo.
    try
    {
        email.setValor(string(campo4));
    }
    catch (invalid_argument &exp)
    {
        cout << texto10 << endl; // Informa formato incorreto.
        getch();                 // Leitura de caracter digitado.
        return;
    }
    // Exclui usuario e conta.

    if (cntrSConta->eliminar(email))
    {
        cout << texto11 << endl; // Informa sucesso.
        getch();
        return;
    }

    cout << texto12 << endl; // Informa falha.
    getch();

    return;
}

void CntrIAConta::editarDados()
{
    char texto1[] = "Selecione um dos servicos: ";
    char texto2[] = "1 - Pesquisar conta para alterar por email";
    char texto3[] = "2 - Retornar";
    char texto10[] = "Opção invalida. Digite algo.";
    char texto11[] = "Sucesso na consulta. Digite algo.";
    char texto12[] = "Falha na consulta. Digite algo.";

    char textoA[] = "Digite o email da conta para editar: ";

    char texto20[] = "Selecione um dados para alterar";
    char texto21[] = "1 - Alterar Nome";
    char texto23[] = "3 - Alterar Senha";
    char texto24[] = "4 - Gravar";
    char texto25[] = "5 - Retornar";
    char texto26[] = "Digite um novo Nome: ";
    char texto27[] = "Digite uma nova Senha: ";
    char texto29[] = "Preview dos dados a gravar. Digite algo.";
    char texto30[] = "Sucesso ao atualizar dados. Digite algo.";
    char texto31[] = "Falha ao atualizar dados. Digite algo.";

    char campoEmail[80];

    bool apresentar = true; // Controle de laco.

    while (apresentar)
    {
        CLR_SCR;
        cout << texto1 << endl; // Imprime nome do campo.
        cout << texto2 << endl;
        cout << texto3 << endl;

        int campoOpcao;
        campoOpcao = getch() - 48;

        switch (campoOpcao)
        {
        case 1:
            CLR_SCR;
            cout << textoA << endl;
            cin >> campoEmail;
            cout << "Valor lido '" << campoEmail << "'" << endl;
            break;
        case 2:
            apresentar = false;
            return;
            break;
        default:
            cout << texto10 << endl;
            getch();
            break;
        }

        Texto email;
        email.setValor(string(campoEmail));
        Conta contaVelha = cntrSConta->recuperarConta(email);

        if (contaVelha.getEmail().getValor() == "" || contaVelha.getEmail().getValor() != email.getValor())
        {
            cout << "Email nao encontrado" << endl;
            cout << texto12 << endl;
            getch();
        }
        else
        {
            cout << "Conta encontrada:" << endl;

            cout << "Nome: " << contaVelha.getNome().getValor() << endl;
            cout << "Email: " << contaVelha.getEmail().getValor() << endl;
            cout << "Senha: " << contaVelha.getSenha().getValor() << endl;
            cout << texto11 << endl;
            getch();

            Conta contaNova = contaVelha;

            bool apresentarNivel2 = true;
            while (apresentarNivel2)
            {
                CLR_SCR;
                cout << texto20 << endl;
                cout << texto21 << endl;
                cout << texto23 << endl;
                cout << texto24 << endl;

                campoOpcao = getch() - 48;

                char novoValor[80];

                switch (campoOpcao)
                {
                case 1:
                    cout << texto26 << endl;
                    cin >> novoValor;
                    contaNova.setNome(Texto(novoValor));
                    break;
                case 3:
                    cout << texto27 << endl;
                    cin >> novoValor;
                    contaNova.setSenha(Texto(novoValor));
                    break;
                case 4:
                    if(cntrSConta->editar(contaNova)) {
                        cout << texto30 << endl;
                        getch();
                    } else {
                        cout << texto31 << endl;
                        getch();
                    }
                    apresentarNivel2 = false;
                    apresentar = false;
                    break;
                case 5:
                    apresentarNivel2 = false;
                default:
                    cout << texto10 << endl;
                    getch();
                    break;
                }
                CLR_SCR;
                cout << "Nome: " << contaNova.getNome().getValor() << endl;
                cout << "Email: " << contaNova.getEmail().getValor() << endl;
                cout << "Senha: " << contaNova.getSenha().getValor() << endl;
                cout << texto29 << endl;
                getch();
            }
        }
    }
}
//--------------------------------------------------------------------------------------------
void CntrIAConta::consultarDadosPessoais()
{
    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    char texto1[] = "Selecione um dos servicos: ";
    char texto2[] = "1 - Consultar conta por meio do email";
    char texto3[] = "2 - Retornar";
    char texto10[] = "Opção invalida. Digite algo.";
    char texto11[] = "Sucesso na consulta. Digite algo.";
    char texto12[] = "Falha na consulta. Digite algo.";
    
    char textoA[] = "Digite o email da conta para editar: ";
    char campoEmail[80];

    bool apresentar = true; // Controle de laco.

    while (apresentar)
    {
        CLR_SCR;
        cout << texto1 << endl; // Imprime nome do campo.
        cout << texto2 << endl;
        cout << texto3 << endl;

        int campoOpcao;
        campoOpcao = getch() - 48;

        switch (campoOpcao)
        {
        case 1:
            CLR_SCR;
            cout << textoA << endl;
            cin >> campoEmail;
            cout << "Valor lido '" << campoEmail << "'" << endl;
            break;
        case 2:
            apresentar = false;
            return;
            break;
        default:
            cout << texto10 << endl;
            getch();
            break;
        }

        Texto email;
        email.setValor(string(campoEmail));
        Conta contaVelha = cntrSConta->recuperarConta(email);

        if (contaVelha.getEmail().getValor() == "" || contaVelha.getEmail().getValor() != email.getValor())
        {
            cout << "Email nao encontrado" << endl;
            cout << texto12 << endl;
            getch();
        }
        else
        {
            cout << "Conta encontrada:" << endl;

            cout << "Nome: " << contaVelha.getNome().getValor() << endl;
            cout << "Email: " << contaVelha.getEmail().getValor() << endl;
            cout << "Senha: " << contaVelha.getSenha().getValor() << endl;
            cout << texto11 << endl;
            getch();

        }
    }
}






//--------------------------------------------------------------------------------------------
/*void CntrIAConta::consultarDadosPessoais()
{

    // Mensagens a serem apresentadas na tela de apresenta��o de dados pessoais.

    char texto[] = "Digite algo para sair "; // Mensagem a ser apresentada.
    char texto2[] = "Nome: ";
    char texto3[] = "Email: ";
    char texto4[] = "Senha: ";

    CLR_SCR;               // Limpa janela.
    cout << texto << endl; // Imprime nome do campo.
    getch();
}*/
/*
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
}*/
#endif // CONTROLADORASAPRESENTACAO_CPP_INCLUDED
