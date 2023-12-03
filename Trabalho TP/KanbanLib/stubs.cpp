#include "stubs.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.
const string StubISAutenticacao::EMAIL_INVALIDO = "teste@testemail";
const string StubISAutenticacao::SENHA_INVALIDA = "Ab1!a";

const string StubISConta::EMAIL_INVALIDO = "teste@testemail";
const string StubISConta::SENHA_INVALIDA = "Ab1!a";

const string StubISProjetos::CODIGO_INVALIDO = "AB12";

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.

bool StubISAutenticacao::autenticar(Email email, Senha senha) {
  if (email.getEmail() == EMAIL_INVALIDO)
    return false;
  if (senha.getSenha() == SENHA_INVALIDA)
    return false;
  return true;
}

bool StubISConta::criarConta(Conta conta) {
  if (conta.getEmail().getEmail() == EMAIL_INVALIDO)
    return false;
  return true;
}

bool StubISConta::eliminar(Email email) {
  if (email.getEmail() == EMAIL_INVALIDO)
    return false;
  return true;
}

bool StubISConta::editar(Conta conta) {
  if (conta.getEmail().getEmail() == EMAIL_INVALIDO)
    return false;
  return true;
}

bool StubISConta::visualizar(Conta *conta) {
  if (conta->getEmail().getEmail() == EMAIL_INVALIDO)
    return false;
  return true;
}

bool StubISProjetos::criarQuadro(Quadro quadro) {
  if (quadro.getCodigo().getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}

bool StubISProjetos::eliminarQuadro(Codigo codigo) {
  if (codigo.getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}
bool StubISProjetos::criarCartao(Cartao cartao) {
  if (cartao.getCodigo().getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}
bool StubISProjetos::visualizarCartao(Codigo *codigo) {
  if (codigo->getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}
bool StubISProjetos::moverCartao(Codigo codigo) {
  if (codigo.getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}
bool StubISProjetos::eliminarCartao(Codigo codigo) {
  if (codigo.getCodigo() == CODIGO_INVALIDO)
    return false;
  return true;
}
