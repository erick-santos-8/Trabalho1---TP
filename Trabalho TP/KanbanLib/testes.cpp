#include "testes.h"
#include <stdexcept>

//Métodos da classe TUCodigo

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUColuna

void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso(){
    try{
        coluna->setColuna(VALOR_VALIDO);
        if (coluna->getColuna() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUColuna::testarCenarioFalha(){
    try{
        coluna->setColuna(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (coluna->getColuna() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUEmail

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TULimite

void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;
}

void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso(){
    try{
        limite->setLimite(VALOR_VALIDO);
        if (limite->getLimite() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TULimite::testarCenarioFalha(){
    try{
        limite->setLimite(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (limite->getLimite() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TULimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUsenha

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Métodos da classe TUTexto

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO);
        if (texto->getTexto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getTexto() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

