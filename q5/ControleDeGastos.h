#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;


class ControleDeGastos
{
    public:
        ControleDeGastos();
        double calculaTotalDeDespesas();
        bool existeDispesaDoTipo(string e);

    protected:

    private:
        Despesa despesas[5];
        double total;

};

#endif // CONTROLEDEGASTOS_H
