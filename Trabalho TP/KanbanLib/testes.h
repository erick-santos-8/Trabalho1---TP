#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <string>

using namespace std;

// Testes Dominios | Feito por 211020820 | ----------------------------------------------------------------------------------------------------

/**
*@brief Classe TUCodigo responsavel pelo teste da classe Codigo
*@brief Classe para realizacao de teste unitario da classe Codigo
*@author Caio Silva Batista / Matr 211020820
*/
class TUCodigo {
private:
    string VALOR_VALIDO   = "LD54";         // Definição de de caso válido.
    string VALOR_INVALIDO = "az9";          // Definição de caso inválido.
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUColuna responsavel pelo teste da classe Coluna
*@brief Classe para realizacao de teste unitario da classe Coluna
*@author Caio Silva Batista / Matr 211020820
*/
class TUColuna {
private:
    string VALOR_VALIDO   = "SOLICITADO";   // Definição de caso válido.
    string VALOR_INVALIDO = "sOLICITADO";   // Definição de caso inválido.
    Coluna *coluna;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUEmail responsavel pelo teste da classe Email
*@brief Classe para realizacao de teste unitario da classe Email
*@author Caio Silva Batista / Matr 211020820
*/
class TUEmail {
private:
    string VALOR_VALIDO   = "caio@unb";                      // Definição de caso válido.
    string VALOR_INVALIDO = "caio@UNIVERSIDADEDEBRASILIA";   // Definição de caso inválido.
    Email *email;                                            // Referência para unidade em teste.
    int estado;                                              // Estado do teste.
    void setUp();                                            // Método para criar unidade em teste.
    void tearDown();                                         // Método para destruir unidade em teste.
    void testarCenarioSucesso();                             // Cenário de teste.
    void testarCenarioFalha();                               // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TULimite responsavel pelo teste da classe Limite
*@brief Classe para realizacao de teste unitario da classe Limite
*@author Caio Silva Batista / Matr 211020820
*/
class TULimite {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de caso válido.
    const static int VALOR_INVALIDO = 30;   // Definição de caso inválido.
    Limite *limite;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUSenha responsavel pelo teste da classe Senha
*@brief Classe para realizacao de teste unitario da classe Senha
*@author Caio Silva Batista / Matr 211020820
*/
class TUSenha {
private:
    string VALOR_VALIDO   = "Az1?d";        // Definição de caso válido.
    string VALOR_INVALIDO = "A!222";        // Definição de caso inválido.
    Senha *senha;                           // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUTexto responsavel pelo teste da classe Texto
*@brief Classe para realizacao de teste unitario da classe Texto
*@author Caio Silva Batista / Matr 211020820
*/
class TUTexto {
private:
    string VALOR_VALIDO   = "O que sou?";   // Definição de caso válido.
    string VALOR_INVALIDO = "ate  onde ??"; // Definição de caso inválido.
    Texto *texto;                           // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

//Testes Entidades | Feito por 222031116 | -----------------------------------------------------------------------------------------------------


/**
*@brief Classe TUConta responsavel pelo teste da classe Conta
*@brief Classe para realizacao de teste unitario da classe Conta
*@author Erick dos Santos Araujo / Matr 222031116
*/
class TUConta {
    private:
        string VALOR_VALIDO_TEXTO = "Testando!Teste concluido";      // Definição de constante para caso válido.
        string VALOR_VALIDO_EMAIL = "teste@email.com";      // Definição de constante para caso válido.
        string VALOR_VALIDO_SENHA = "B?e31";        // Definição de constante para caso válido.
        Conta *conta;                       // Referência para unidade em teste.
        int estado;                             // Estado do teste.
        void setUp();                           // Método para criar unidade em teste.
        void tearDown();                        // Método para destruir unidade em teste.
        void testarCenarioSucesso();            // Cenário de teste.
    public:
        ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUQuadro responsavel pelo teste da classe Quadro
*@brief Classe para realizacao de teste unitario da classe Quadro
*@author Erick dos Santos Araujo / Matr 222031116
*/
class TUQuadro {
    private:
        string VALOR_VALIDO_CODIGO = "RC01";        // Definição de constante para caso válido.
        string VALOR_VALIDO_NOME = "Quadro";        // Definição de constante para caso válido.
        string VALOR_VALIDO_DESCRICAO = "Primeiro teste";       // Definição de constante para caso válido.
        int VALOR_VALIDO_LIMITE = 5;        // Definição de constante para caso válido.
        Quadro *quadro;                     // Referência para unidade em teste.
        int estado;                             // Estado do teste.
        void setUp();                           // Método para criar unidade em teste.
        void tearDown();                        // Método para destruir unidade em teste.
        void testarCenarioSucesso();            // Cenário de teste.
    public:
        ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};

/**
*@brief Classe TUCartao responsavel pelo teste da classe Cartao
*@brief Classe para realizacao de teste unitario da classe Cartao
*@author Erick dos Santos Araujo / Matr 222031116
*/
class TUCartao {
    private:
        string VALOR_VALIDO_CODIGO = "CR07";        // Definição de constante para caso válido.
        string VALOR_VALIDO_NOME = "Cartao";        // Definição de constante para caso válido.
        string VALOR_VALIDO_DESCRICAO = "Segundo teste";        // Definição de constante para caso válido.
        string VALOR_VALIDO_COLUNA = "SOLICITADO";      // Definição de constante para caso válido.
        Cartao *cartao;                         // Referência para unidade em teste.
        int estado;                             // Estado do teste.
        void setUp();                           // Método para criar unidade em teste.
        void tearDown();                        // Método para destruir unidade em teste.
        void testarCenarioSucesso();            // Cenário de teste.
    public:
        ///Variavel para retorno de sucesso no codigo.
        const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
        ///Variavel para retorno de falha no codigo.
        const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
        /**
        * \brief Metodo para iniciar os testes da classe.
        * \return Variavel "SUCESSO" se nao houver erros no codigo e "FALHA" se houver erros.
        */
        int run();                              // Método para executar teste.
};
#endif // TESTES_H_INCLUDED
