#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
// Declara��es de classes controladoras e implementa��es de m�todos.

class CntrApresentacaoControle{
    private:
        Email email; //email
        IAAutenticacao *cntrAAutenticacao; //IAAutenticacao
        IAConta *cntrAConta; //IAConta cntrApresentacaoConta
        IAProjetos *cntrAProjetos; //IAProjetos cntrApresentacaoProjetos
    public:
        void executar();
        void setCntrIAAutenticacao(IAAutenticacao*);
        void setCntrIAConta(IAConta*);
        void setCntrIAProjetos(IAProjetos*);
};

inline void CntrApresentacaoControle::setCntrIAAutenticacao(IAAutenticacao *cntr){
        cntrAAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrIAConta(IAConta *cntr){
        cntrAConta = cntr;
}

inline void CntrApresentacaoControle::setCntrIAProjetos(IAProjetos *cntr){
        cntrAProjetos = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrIAAutenticacao:public IAAutenticacao{
    private:
        ISAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrISAutenticacao(ISAutenticacao*);
};

inline void CntrIAAutenticacao::setCntrISAutenticacao(ISAutenticacao *cntr){
        this->cntr = cntr;
}
//FEITO
//--------------------------------------------------------------------------------------------

class CntrIAConta:public IAConta{
    private:
        ISConta *cntrSConta;
        void consultarDadosPessoais();
        void editarDados();
        void excluirConta();
    public:
        void executar(Email);
        void criarConta();
        void setCntrISConta(ISConta*);
};

inline void CntrIAConta::setCntrISConta(ISConta *cntr){
        cntrSConta = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrIAProjetos:public IAProjetos{
    private:
        ISProjetos *cntr;
        void criarQuadro();
        void visualizarQuadro();
        void eliminarQuadro();
        void criarCartao();
        void visualizarCartao();
        void moverCartao();
        void eliminarCartao();
    public:
        void executar();
        void setCntrISProjetos(ISProjetos*);
};

inline void CntrIAProjetos::setCntrISProjetos(ISProjetos *cntr){
        this->cntr = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED

