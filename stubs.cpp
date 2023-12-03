#ifndef STUBS_CPP_INCLUDED
#define STUBS_CPP_INCLUDED

#include "stubs.h"
#include "persistencia.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

//const string StubISAutenticacao::INVALIDO = "12345";
const string StubISConta::INVALIDO = "12345";
//const string StubISProjetos::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.
/*
bool StubISAutenticacao::autenticar(Email email, Senha senha){
    if(email.getEmail().compare(INVALIDO) == 0)
        return false;
    if(senha.getSenha().compare(INVALIDO) == 0)
        return false;
    return true;
}*/

bool StubISConta::criarConta(Conta conta){
    ComandoCadastrarConta comando(conta);
    comando.executar();
    return true;
}

Conta StubISConta::recuperarConta(Texto email){
    ComandoConsultarConta comando(email);
    comando.executar();
    return comando.getResultado();
}

bool StubISConta::eliminar(Texto email){
    ComandoDeletarConta comando(email);
    comando.executar();
    return true;
}

bool StubISConta::editar(Conta conta){
    ComandoAtualizarConta comando(conta);
    comando.executar();
    return true;
}
/*
bool StubISConta::visualizar(Conta *conta){
    if(conta->getEmail().getEmail().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubISProjetos::criarQuadro(Quadro quadro){
    if(quadro.getCodigo().getCodigo().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubISProjetos::eliminarQuadro(Codigo codigo){
    if(codigo.getCodigo().compare(INVALIDO) == 0)
        return false;
    return true;
}
bool StubISProjetos::criarCartao(Cartao cartao){
    if(cartao.getCodigo().getCodigo().compare(INVALIDO) == 0)
        return false;
    return true;
}
bool StubISProjetos::visualizarCartao(Codigo *codigo){
    if(codigo->getCodigo().compare(INVALIDO)==0)
        return false;
    return true;
}
bool StubISProjetos::moverCartao(Codigo codigo){
    if(codigo.getCodigo().compare(INVALIDO) == 0)
        return false;
    return true;
}
bool StubISProjetos::eliminarCartao(Codigo codigo){
    if(codigo.getCodigo().compare(INVALIDO) == 0)
        return false;
    return true;
}
*/
#endif
