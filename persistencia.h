#ifndef PERSISTENCIA_H_INCLUDED
#define PERSISTENCIA_H_INCLUDED


#include "sqlite3.h"
#include "entidades.h"
#include <list>
#include <string>

using namespace std;

class EErroPersistencia {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

class ElementoResultado {
   private:
        string nomeColuna;
        string valorColuna;
   public:
        void setNomeColuna(const string &);
        string getNomeColuna() const;
        void setValorColuna(const string &);
        string getValorColuna() const;
};

inline string ElementoResultado::getValorColuna() const {
        return valorColuna;
}

class ComandoSQL {
   private:
        const char *bdFile;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar();
        void desconectar();
        static int callback(void *, int, char **, char **);
   protected:
        static list<ElementoResultado> listaResultado;
        string comandoSQL;
   public:

        ComandoSQL() {
             bdFile = "bd_kanban.db";                             // Nome do banco de dados.
        }
        void executar();
};

class ComandoCadastrarConta:public ComandoSQL {
public:
        ComandoCadastrarConta(Conta);
};

class ComandoDeletarConta:public ComandoSQL {
public:
        ComandoDeletarConta(Texto);
};

class ComandoAtualizarConta:public ComandoSQL {
public:
        ComandoAtualizarConta(Conta);
};

class ComandoConsultarConta:public ComandoSQL {
public:
        ComandoConsultarConta(Texto);
        Conta getResultado();
};

/*
class ComandoLerSenha:public ComandoSQL {
public:
        ComandoLerSenha(Email);
        Conta getResultado();
};*/

#endif // PERSISTENCIA_H_INCLUDED
