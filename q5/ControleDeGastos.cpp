#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

ControleDeGastos::ControleDeGastos()
{
    total = 0;
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    for(int i = 0; i < 5; i++){
        total = total + despesas[i].getValor();
    }

    return total;
}

bool ControleDeGastos::existeDispesaDoTipo(string e)
{
    for(int i = 0; i < 5; i++){
        if(strcmp(e , despesas[i].getTipoDeGasto()) == 0){
            return true;
        }
        else
            return false;

    }

}
