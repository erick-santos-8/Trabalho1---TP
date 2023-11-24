#include <string.h>
#include <stdexcept>
#include <iostream>

#include "dominios.h"
#include "interfaces.h"
#include "controladorasapresentacao.h"
#include "stubs.h"

using namespace std;

int main()
{
    // Declarar poteiros e instanciar controladoras.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IAAutenticacao *cntrAAutenticacao;
    IAConta *cntrAConta;
    IAProjetos *cntrAProjetos;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrAAutenticacao = new CntrIAAutenticacao();
    cntrAConta = new CntrIAConta();
    cntrAProjetos = new CntrIAProjetos();

    // Instanciar stubs.

    ISAutenticacao *stubSAutenticacao;
    ISConta *stubSConta;
    ISProjetos *stubSProjetos;

    stubSAutenticacao = new StubISAutenticacao();
    stubSConta = new StubISConta();
    stubSProjetos = new StubISProjetos();

    // Interligar controladoras e stubs.

    cntrApresentacaoControle->setCntrIAAutenticacao(cntrAAutenticacao);
    cntrApresentacaoControle->setCntrIAConta(cntrAConta);
    cntrApresentacaoControle->setCntrIAProjetos(cntrAProjetos);

    cntrAAutenticacao->setCntrISAutenticacao(stubSAutenticacao);

    cntrAConta->setCntrISConta(stubSConta);

    cntrAProjetos->setCntrISProjetos(stubSProjetos);

    cntrApresentacaoControle->executar();                                           // Solicitar servi�o.

    return 0;
}


