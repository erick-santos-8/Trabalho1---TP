#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

// Forward declaration
class ISAutenticacao;
class ISConta;
class ISProjetos;
//-----------------------------------------------------------------------------

// Declaracao das interfaces da camada de apresentacao
/*class IAAutenticacao {
public:
  virtual bool autenticar(Email *) = 0;
  virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
  virtual ~IAAutenticacao(){};
};
*/
class IAConta {
public:
  virtual void criarConta() = 0;
  virtual void excluirConta() = 0;
  virtual void executar(Texto) = 0;
  virtual void setCntrISConta(ISConta *) = 0;
  virtual ~IAConta(){};
};
/*
class IAProjetos {
public:
  virtual void executar() = 0;
  virtual void setCntrISProjetos(ISProjetos *) = 0;
  virtual ~IAProjetos(){};
};
//-----------------------------------------------------------------------------

// Declaracao das interfaces da camada de servico

class ISAutenticacao {
public:
  virtual bool autenticar(const Email, const Senha) = 0;
  virtual ~ISAutenticacao(){};
};
*/
class ISConta {
public:
  virtual bool criarConta(Conta) = 0;
  virtual bool eliminar(Texto) = 0;
  virtual bool editar(Conta) = 0;
  virtual Conta recuperarConta(Texto) = 0;
  /*
  virtual bool visualizar(Conta *) = 0;
  */
  virtual ~ISConta(){};
};
/*
class ISProjetos {
public:
  // metodos para quadro
  virtual bool criarQuadro(Quadro) = 0;

  virtual bool eliminarQuadro(Codigo) = 0;

  // metodos para cartao
  virtual bool criarCartao(Cartao) = 0;
  virtual bool visualizarCartao(Codigo *) = 0;
  virtual bool moverCartao(Codigo) = 0;
  virtual bool eliminarCartao(Codigo) = 0;

  // metodo destrutor
  virtual ~ISProjetos(){};
};*/
//-----------------------------------------------------------------------------

#endif
