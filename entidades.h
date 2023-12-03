#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

/*
class Conta
{
private:
    Texto nome;

public:
    Conta()
    {
    }
    Conta(const Conta &conta)
    {
        this->nome = conta.nome;
    }
    Conta &operator=(const Conta &conta)
    {
        if (this != &conta)
        {
            this->nome = conta.nome;
        }
        return *this;
    }

    Texto getNome()
    {
        return nome;
    }
    void setNome(Texto pNome)
    {
        this->nome = pNome;
    }
};*/

/**
*@brief Classe Conta Usuario
*@brief Refere-se as contas dos usuários que farão uso da ferramenta de Kanban. A conta de usuario permite que uma pessoa tenha acesso ao sistema Kanban e as suas funcionalidades
*@author Maria da Conceicao L Afonso / Matr 170003370
*/

class Conta
{
private:
    /// Declara cada atributo da classe Conta que é composta por nome, o e-mail e a senha do usuario que terá acesso ao ambiente
    Texto nome;
    Texto email;
    Texto senha;

public:
    Conta()
    {
    }
    Conta(const Conta &conta)
    {
        this->nome = conta.nome;
        this->email = conta.email;
        this->senha = conta.senha;
    }
    Conta &operator=(const Conta &conta)
    {
        if (this != &conta)
        {
            this->nome = conta.nome;
            this->email = conta.email;
            this->senha = conta.senha;
        }
        return *this;
    }
    /**
     * \brief O metodo atribui um valor ao nome, se a entrada for validada, e lança um exceção se o valor for invalido.
     * \param valor String que sera atribuída, se for validada.
     * \exception invalid_argument O metodo lança uma exceção se o valor inserido nao apresentar todas as características da classe Texto.
     * \return void
    */
    void setNome(const Texto);
    /**
    * \brief O metodo devolve o valor armazenado.
    * \return Valor que caracteriza o Texto.
    */
    Texto getNome();

    /**
     * \brief O metodo atribui um valor ao email, se a entrada for validada, e lança um exceção se o valor for invalido.
     * \param valor String que sera atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceçao se o valor inserido não apresentar todas as características da classe Email.
     * \return void
    */
    void setEmail(const Texto);
    /**
    * \brief O metodo devolve o valor armazenado.
    * \return Valor que caracteriza o Email.
    */
    Texto getEmail();

    /**
     * \brief O metodo atribui um valor a senha, se a entrada for validada, e lança um exceção se o valor for invalido.
     * \param valor String que sera atribuída, se for validada.
     * \exception invalid_argument O metodo lança uma exceção se o valor inserido não apresentar todas as características da classe Senha.
     * \return void
    */
    void setSenha(const Texto);
    /**
    * \brief O metodo devolve o valor armazenado.
    * \return Valor que caracteriza a Senha.
    */
    Texto getSenha();
};

inline void Conta::setNome(const Texto nome){
    this->nome = nome;
}

inline Texto Conta::getNome() {
    return nome;
}

inline void Conta::setEmail(const Texto email){
    this->email = email;
}

inline Texto Conta::getEmail() {
    return email;
}

inline void Conta::setSenha(const Texto senha){
    this->senha = senha;
}

inline Texto Conta::getSenha() {
    return senha;
}

#endif // ENTIDADES_H_INCLUDED
