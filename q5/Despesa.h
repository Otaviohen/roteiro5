#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>
#include <string>

using namespace std;


class Despesa
{
    public:
        Despesa();
        void setValor(double v);
        void setTipoDeGasto(string t);
        double getValor();
        string getTipoDeGasto();

    protected:

    private:
        double valor;
        string tipoDeGasto;
};

#endif // DESPESA_H
