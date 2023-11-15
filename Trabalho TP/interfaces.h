#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

// Forward declaration
class ISAutenticacao;
class ISConta;
class ISGestao;
//-----------------------------------------------------------------------------

// Declaracao das interfaces da camada de apresentacao
class IAAutenticacao {
public:
  virtual bool autenticar(Email *) = 0;
  virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
  virtual ~IAAutenticacao(){};
};

class IAConta {
public:
  virtual void cadastrar() = 0;
  virtual void executar(Email) = 0;
  virtual void setCntrISConta(ISConta *) = 0;
  virtual ~IAConta(){};
};

class IAGestao {
  virtual void executar() = 0;
  virtual ~IAGestao(){};
};
//-----------------------------------------------------------------------------

// Declaracao das interfaces da camada de servico

class ISAutenticacao {
public:
  virtual bool autenticar(const Email, const Senha) = 0;
  virtual ~ISAutenticacao(){};
};

class ISConta {
public:
  virtual bool cadastrar(Conta) = 0;
  virtual bool decadastrar(Email) = 0;
  virtual bool editar(Conta) = 0;
  virtual bool visualizar(Conta *) = 0;
  virtual ~ISConta(){};
};

class ISGestao {
public:
  // metodos para quadro
  virtual bool criar_quadro(Quadro) = 0;
  virtual bool visualizar_quadro(Codigo *) = 0;
  virtual bool eliminar_quadro(Codigo) = 0;

  // metodos para cartao
  virtual bool criar_cartao(Cartao) = 0;
  virtual bool visualizar_cartao(const Codigo *) = 0;
  virtual bool mover_cartao(const Codigo) = 0;
  virtual bool eliminar_cartao(const Codigo) = 0;

  // metodo destrutor
  virtual ~ISGestao(){};
};
//-----------------------------------------------------------------------------

#endif