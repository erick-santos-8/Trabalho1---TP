#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>

using namespace std;

class Texto
{
private:
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


    string getValor()
    {
        return valor;
    }
    void setValor(string pValor)
    {
        this->valor = pValor;
    }
    Texto &operator=(const Texto &other)
    {
        if (this != &other)
        {
            this->valor = other.valor;
        }
        return *this;
    }
};

#endif // DOMINIOS_H_INCLUDED
