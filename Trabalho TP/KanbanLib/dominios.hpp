#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
    private:
        static const unsigned int TAMANHO_CODIGO = 4;
        string valor;
        const void validar(string);
    public:
        const string getCodigo();
        void setCodigo(string);
};

inline const string Codigo::getCodigo() {
    return valor;
}


class Coluna {
    private:
        string valor;
        const void validar(string);
    public:
        const string getColuna();
        void setColuna(string);
};

inline const string Coluna::getColuna() {
    return valor;
}


class Email {
    private:
        static const unsigned int TAMANHO_MIN_NOME = 2, TAMANHO_MAX_NOME = 10;
        static const unsigned int TAMANHO_MIN_DOMINIO = 2, TAMANHO_MAX_DOMINIO = 20;
        string valor;
        const void validar(string);
    public:
        const string getEmail();
        void setEmail(string);
};

inline const string Email::getEmail() {
    return valor;
}


class Limite {
    private:
        unsigned int valor;
        const void validar(unsigned int);
    public:
        const unsigned int getLimite();
        void setLimite(unsigned int);
};

inline const unsigned int Limite::getLimite() {
    return valor;
}


class Senha {
    private:
        static const unsigned int TAMANHO_SENHA = 5;
        string valor;
        const void validar(string);
        const bool ispontuacao(char);
    public:
        const string getSenha();
        void setSenha(string);
};

inline const string Senha::getSenha() {
    return valor;
}


class Texto {
    private:
        static const unsigned int TAMANHO_MIN_TEXTO = 5, TAMANHO_MAX_TEXTO = 30;
        string valor;
        const void validar(string);
        const bool ispontuacao(char);
    public:
        const string getTexto();
        void setTexto(string);
};

inline const string Texto::getTexto() {
    return valor;
}