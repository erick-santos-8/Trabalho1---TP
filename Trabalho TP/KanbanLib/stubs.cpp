#include "stubs.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

const string StubISAutenticacao::INVALIDO = "12345";
const string StubISConta::INVALIDO = "12345";
const string StubISProjetos::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.

bool StubISAutenticacao::autenticar(Email email, Senha senha){
    if(email.getEmail().compare(INVALIDO) == 0)
        return false;
    if(senha.getSenha().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubISConta::criarConta(Conta conta){
    if(conta.getEmail().getEmail().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubISConta::eliminar(Email email){
    if(email.getEmail().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubISConta::editar(Conta conta){
    if(conta.getEmail().getEmail().compare(INVALIDO) == 0)
        return false;
    return true;
}

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
