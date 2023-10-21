
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>

using namespace std;

/**
 * \class Codigo
 * \brief Código é um conjunto de dígitos e letras que tem por função identificar instâncias, a fim de que cada instância tenha sua unicidade dentro do sistema. O código deve seguir o padrão 'LLDD' (L = letra, D = dígito).
 * \note
 * \par Especificação
 *  Formato LLDD
 * \par
 *  L é letra maiúscula (A - Z)
 * \par
 *  D é dígito (0 – 9)
 * \author Pedro Amorim / Matr 221029329
 */
class Codigo {
    private:

    /**
     * \var TAMANHO_CODIGO
     * \brief Define o tamanho do código.
    */
        static const unsigned int TAMANHO_CODIGO = 4;

    /**
     * \var valor
     * \brief Variável que armazena o código no formato de string.
    */
        string valor;

    /**
     * \brief O método tem como intuito verificar se o código inserido apresenta as características válidas.
     * \param valor String que passará pelo processo de validação.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        const void validar(string);
    public:

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza o código.
    */
        const string getCodigo();

    /**
     * \brief O método atribui um valor ao código, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setCodigo(string);
};

inline const string Codigo::getCodigo() {
    return valor;
}

/**
 * \class Coluna
 * \brief Coluna é um domínio que tem como papel definir a localizacao de um cartao no sistema, ela pode ser: "SOLICIDATADO", "EM EXECUCAO", "CONCLUIDO".
 * \note
 * \par Especificação
 *  Deve ter valor = "SOLICITADO", "EM EXECUCAO" ou "CONCLUIDO".
 * \author Pedro Amorim / Matr 221029329
 */
class Coluna {
    private:

    /**
     * \var valor
     * \brief Valor que define a coluna.
    */
        string valor;

    /**
     * \brief O método tem como intuito verificar se a coluna inserida apresenta as características válidas.
     * \param valor String que passará pelo processo de validação.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        const void validar(string);
    public:

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza a coluna.
    */
        const string getColuna();

    /**
     * \brief O método atribui um valor a coluna, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setColuna(string);
};

inline const string Coluna::getColuna() {
    return valor;
}

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
class Email {
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

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza a email.
    */
        const string getEmail();

    /**
     * \brief O método atribui um valor ao email, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setEmail(string);
};

inline const string Email::getEmail() {
    return valor;
}

/**
 * \class Limite
 * \brief Limite é o valor que delimita a quantidade máxima de cartões em um Quadro.
 * \note
 * \par Especificação
 *  Deve ter valor = 5, 10, 15 ou 20
 * \author Pedro Amorim / Matr 221029329
 */
class Limite {
    private:

    /**
     * \var valor
     * \brief Valor que define o limite.
    */
        unsigned int valor;

    /**
     * \brief O método tem como intuito verificar se o limite inserido apresenta as características válidas.
     * \param valor Int que passará pelo processo de validação.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        const void validar(unsigned int);
    public:

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza o limite.
    */
        const unsigned int getLimite();

    /**
     * \brief O método atribui um valor ao limite, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor Int que será atribuído, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setLimite(unsigned int);
};

inline const unsigned int Limite::getLimite() {
    return valor;
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

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza a senha.
    */
        const string getSenha();

    /**
     * \brief O método atribui um valor a senha, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setSenha(string);
};

inline const string Senha::getSenha() {
    return valor;
}

/**
 * \class Texto
 * \brief Texto é um conjunto de caracteres que tem como objetivo expressar um nome ou uma ideia.
 * \note
 * \par Especificação
 *  5 a 30 caracteres
 * \par
 *  Cada caractere é letra (A - Z, a - z), dígito (0-9), sinal de pontuação ( . , ; ? !) ou espaço em branco
 * \par
 *  Não há espaços em branco em sequência
 * \par
 * Não há sinais de pontuação em sequência
 * \par
 * Não há acentuação
 * \par
 * Primeiro caractere é letra maiúscula
 * \par
 * Primeiro caractere após sinal de pontuação (exceto vírgula ou ponto-e-vírgula) é letra maiúscula
 * \author Pedro Amorim / Matr 221029329
 */
class Texto {
    private:

    /**
     * \var TAMANHO_MIN_TEXTO
     * \brief Valor que define o tamanho minimo do texto.
    */
   /**
     * \var TAMANHO_MAX_TEXTO
     * \brief Valor que define o tamanho maximo do texto.
    */
        static const unsigned int TAMANHO_MIN_TEXTO = 5, TAMANHO_MAX_TEXTO = 30;

    /**
     * \var valor
     * \brief Valor que define o texto.
    */
        string valor;

    /**
     * \brief O método tem como intuito verificar se o texto inserido apresenta as características válidas.
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

    /**
     * \brief O método devolve o valor armazenado.
     * \return Valor que caracteriza o texto.
    */
        const string getTexto();

    /**
     * \brief O método atribui um valor ao texto, se a entrada for validada, e lança um exceção se o valor for inválido.
     * \param valor String que será atribuída, se for validada.
     * \exception invalid_argument O método lança uma exceção se o valor inserido não apresentar todas as características.
     * \return void
    */
        void setTexto(string);
};

inline const string Texto::getTexto() {
    return valor;
}


#endif // DOMINIOS_H_INCLUDED
