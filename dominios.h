#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

class Texto
{
protected:
    string valor;

public:
    Texto()
    {
    }

    Texto(Texto &texto)
    {
        this->valor = texto.getValor();
    }

    Texto(string texto)
    {
        this->valor = texto;
    }
    Texto &operator=(const Texto &other)
    {
        if (this != &other)
        {
            this->valor = other.valor;
        }
        return *this;
    }

    string getValor()
    {
        return valor;
    }
    void setValor(string pValor)
    {
        validar(pValor);
        this->valor = pValor;
    }

    const void validar(string) {
        return;
    };

};

/**
 * \class Email
 * \brief Email é um nome que define um endereço eletronico, este é utilizado para a troca de mensagens eletronicas.
 * \note
 * \par Especificação
 *  Formato: nome@domínio
 * \par
 *  nome é composto por 2 a 10 caracteres
 * \par
 *  domínio é composto por 2 a 20 caracteres
 * \par
 *  Cada caractere é letra (A-Z ou a-z), dígito (0 – 9) ou ponto (.)
 * \par
 *  Caractere @ não pode ser imediatamente precedido ou sucedido por ponto (.)
 * \par
 *  Não há pontos (.) em sequência
 * \author Pedro Amorim / Matr 221029329
 */
class Email
{
private:
    /**
     * \var TAMANHO_MIN_NOME
     * \brief Valor que define o tamanho minimo do nome do email.
     */
    /**
     * \var TAMANHO_MAX_NOME
     * \brief Valor que define o tamanho maximo do nome do email.
     */
    static const unsigned int TAMANHO_MIN_NOME = 2, TAMANHO_MAX_NOME = 10;

    /**
     * \var TAMANHO_MIN_DOMINIO
     * \brief Valor que define o tamanho minimo do dominio do email.
     */
    /**
     * \var TAMANHO_MAX_DOMINIO
     * \brief Valor que define o tamanho maximo do dominio do email.
     */
    static const unsigned int TAMANHO_MIN_DOMINIO = 2, TAMANHO_MAX_DOMINIO = 20;

    /**
     * \var valor
     * \brief Valor que define o email.
     */
    string valor;
    /**
     * \brief O método tem como intuito verificar se o email inserido apresenta as características válidas.
     * \param valor String que passará pelo processo de validação.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
     */
    const void validar(string);

public:
    Email()
    {
    }

    Email(Email &texto)
    {
        this->valor = texto.getValor();
    }

    Email(string texto)
    {
        this->valor = texto;
    }
    Email &operator=(const Email &other)
    {
        if (this != &other)
        {
            this->valor = other.valor;
        }
        return *this;
    }

    void setValor(string pValor);
    string getValor();
};

inline void Email::setValor(string pValor)
{
    this->validar(pValor);
    this->valor = pValor;
}

inline string Email::getValor()
{
    return this->valor;
}

/**
 * \class Senha
 * \brief Senha é uma palavra-chave que garante a segurança de uma conta contra usuarios mal intencionados.
 * \note
 * \par Especificação
 *  Formato: XXXXX
 * \par
 *  X é um dos seguintes caracteres: letra (A - Z, a - z), dígito (0 - 9), sinal de pontuação ( . , ; ? !)
 * \par
 *  Pelo menos um caractere é letra maiúscula, letra minúscula, dígito e sinal de pontuação
 * \par
 *  Não há caractere duplicado
 * \author Pedro Amorim / Matr 221029329
 */
class Senha {
    private:

    /**
     * \var TAMANHO_SENHA
     * \brief Valor que define o tamanho da senha.
    */
        static const unsigned int TAMANHO_SENHA = 5;

    /**
     * \var valor
     * \brief Valor que define a senha.
    */
        string valor;

    /**
     * \brief O método tem como intuito verificar se a senha inserida apresenta as características válidas.
     * \param valor String que passará pelo processo de validação.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        const void validar(string);

    /**
     * \brief O método verifica se o caractere inserido é um sinal de pontuação ou não.
     * \return Booleano que representa se a entrada é um sinal de pontuação ou não.
    */
        const bool ispontuacao(char);
    public:
    Senha()
    {
    }

    Senha(Senha &texto)
    {
        this->valor = texto.getValor();
    }

    Senha(string texto)
    {
        this->valor = texto;
    }
    Senha &operator=(const Senha &other)
    {
        if (this != &other)
        {
            this->valor = other.valor;
        }
        return *this;
    }
    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza a senha.
    */
        const string getValor();

    /**
     * \brief O método atribui um valor a senha, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setValor(string);
};

inline const string Senha::getValor() {
    return valor;
}

inline void Senha::setValor(string valor) {
    this->validar(valor);
    this->valor = valor;
}

#endif // DOMINIOS_H_INCLUDED
