#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.hpp"
#include <string>

using namespace std;


//=============================
//||        CONTA USUARIO    ||
//=============================

/**
*@brief Classe Conta Usuario
*@brief Refere-se as contas dos usuários que farão uso da ferramenta de Kanban. A conta de usuario permite que uma pessoa tenha acesso ao sistema Kanban e as suas funcionalidades
*@author Maria da Conceicao L Afonso / Matr 170003370
*/

class Conta {
    private:
        /// Declara cada atributo da classe Conta que é composta por nome, o e-mail e a senha do usuario que terá acesso ao ambiente
        Texto nome;
        Email email;
        Senha senha;

    public:
        ///Declara método set e get para cada atributo da classe Conta
        void setNome(const Texto&);
        Texto getNome() const;

        void setEmail(const Email&);
        Email getEmail() const;

        void setSenha(const Senha&);
        Senha getSenha() const;
};

inline void Conta::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Conta::getNome() const {
    return nome;
}

inline void Conta::setEmail(const Email& email){
    this->email = email;
}

inline Email Conta::getEmail() const {
    return email;
}

inline void Conta::setSenha(const Senha& senha){
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}


//=============================
//||        QUADRO           ||
//=============================

/**
*@brief Classe Quadro
*@brief Refere-se aos quadros Kanban criados pelos usuários.Um quadro Kanban permite a gestão das tarefas por meio das colunas - Solicitado, Em execucao e Concluido - e de cartoes, tarefas
*@author Maria da Conceicao L Afonso / Matr 170003370
*/

class Quadro {
    private:
        /// Declara cada atributo da classe Quadro que é composto por codigo, nome, descricao e limite
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Limite limite;

    public:
        ///Declara método set e get para cada atributo da classe Quadro
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Texto&);
        Texto getNome() const;

        void setDescricao(const Texto&);
        Texto getDescricao() const;

        void setLimite(const Limite&);
        Limite getLimite() const;
};

inline void Quadro::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Quadro::getCodigo() const {
    return codigo;
}

inline void Quadro::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Quadro::getNome() const {
    return nome;
}

inline void Quadro::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Quadro::getDescricao() const {
    return descricao;
}

inline void Quadro::setLimite(const Limite& limite){
    this->limite = limite;
}

inline Limite Quadro::getLimite() const {
    return limite;
}


//=============================
//||        CARTAO           ||
//=============================

/**
*@brief Classe Cartao
*@brief Refere-se aos Cartoes dos quadros da ferramenta de Kanban. Os cartões permitem que os usuários identifiquem as tarefas e itens do trabalho que devem ser realizados
*@author Maria da Conceicao L Afonso / Matr 170003370
*/

class Cartao {
    private:
        /// Declara cada atributo da classe Cartao que é composto por codigo, nome, descricao e coluna - Solicitado, Em execucao e Concluido.
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Coluna coluna;

    public:
        ///Declara método set e get para cada atributo da classe Cartao
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Texto&);
        Texto getNome() const;

        void setDescricao(const Texto&);
        Texto getDescricao() const;

        void setColuna(const Coluna&);
        Coluna getColuna() const;
};

inline void Cartao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Cartao::getCodigo() const {
    return codigo;
}

inline void Cartao::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Cartao::getNome() const {
    return nome;
}

inline void Cartao::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Cartao::getDescricao() const {
    return descricao;
}

inline void Cartao::setColuna(const Coluna& coluna){
    this->coluna = coluna;
}

inline Coluna Cartao::getColuna() const {
    return coluna;
}


#endif // ENTIDADES_H_INCLUDED
