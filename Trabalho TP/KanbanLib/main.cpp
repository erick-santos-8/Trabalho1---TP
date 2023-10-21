#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"


using namespace std;

int main()
{
      TUCodigo testeA;
      TUColuna testeB;
      TUEmail testeC;
      TULimite testeD;
      TUSenha testeE;
      TUTexto testeF;
      TUConta testeG;
      TUCartao testeH;
      TUQuadro testeI;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    //Testes dos Dominíos | Feito por 211020820 |

    switch(testeA.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }
    switch(testeB.run()){
        case TUColuna::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
                                break;
        case TUColuna::FALHA  : cout << "FALHA   - COLUNA" << endl;
                                break;
    }
    switch(testeC.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }
    switch(testeD.run()){
        case TULimite::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
                                break;
        case TULimite::FALHA  : cout << "FALHA   - LIMITE" << endl;
                                break;
    }
    switch(testeE.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }
    switch(testeF.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA   - TEXTO" << endl;
                                break;
    }


    cout << "---------------------------------------------------" << endl;

    //Testes de Entidades | Feito por 222031116 |

    switch(testeG.run()){
        case TUConta::SUCESSO: cout << "SUCESSO - CONTA" << endl;
                                break;
        case TUConta::FALHA  : cout << "FALHA   - CONTA" << endl;
                                break;
    }
    switch(testeH.run()){
        case TUCartao::SUCESSO: cout << "SUCESSO - CARTAO" << endl;
                                break;
        case TUCartao::FALHA  : cout << "FALHA   - CARTAO" << endl;
                                break;
    }
    switch(testeI.run()){
        case TUQuadro::SUCESSO: cout << "SUCESSO - QUADRO" << endl;
                                break;
        case TUQuadro::FALHA  : cout << "FALHA   - QUADRO" << endl;
                                break;
    }
    return 0;
}
