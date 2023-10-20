#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <string>

using namespace std;

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

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
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

#endif // TESTES_H_INCLUDED
