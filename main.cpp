#include <iostream>
#include "persistencia.h"
#include "stubs.h"
#include "controladorasapresentacao.h"

int main(int argc, char *argv[])
{
    Texto txtNome;
    Email txtEmail;
    Senha txtSenha;

    txtNome.setValor("avo");
    txtEmail.setValor("nboana@gmail.com");
    txtSenha.setValor("12aB!");

    Conta conta;
    conta.setNome(txtNome);
    conta.setEmail(txtEmail);
    conta.setSenha(txtSenha);

    try
    {
        printf("chegou aqui");
        printf("1\n");
        CntrIAConta cntrAConta;
        printf("2\n");
        StubISConta stubSConta;
        printf("3\n");
        cntrAConta.setCntrISConta(&stubSConta);
        printf("4\n");
        cntrAConta.consultarDadosPessoais();
        printf("5\n");
    }
    catch(EErroPersistencia &e)
    {
        printf(e.what().c_str());
    }
}
