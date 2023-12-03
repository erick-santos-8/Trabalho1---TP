#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include <string>

using namespace std;

//--------------------------------------------------------------------------------------------
// Declara��es de classes stub.

class StubISAutenticacao : public ISAutenticacao {
private:
  static const string EMAIL_INVALIDO;
  static const string SENHA_INVALIDA;

public:
  bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------

class StubISConta : public ISConta {
private:
  static const string EMAIL_INVALIDO;
  static const string SENHA_INVALIDA;

public:
  bool criarConta(Conta);
  bool eliminar(Email);
  bool editar(Conta);
  bool visualizar(Conta *);
};

//--------------------------------------------------------------------------------------------

class StubISProjetos : public ISProjetos {
private:
  static const string CODIGO_INVALIDO;

public:
  // metodos para quadro
  bool criarQuadro(Quadro);
  bool eliminarQuadro(Codigo);

  // metodos para cartao
  bool criarCartao(Cartao);
  bool visualizarCartao(Codigo *);
  bool moverCartao(Codigo);
  bool eliminarCartao(Codigo);
};

#endif // STUBS_H_INCLUDED
