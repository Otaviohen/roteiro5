#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

Despesa::Despesa()
{

}

void Despesa::setValor(double v)
{
    valor = v;
}

void Despesa::setTipoDeGasto(string t)
{
    tipoDeGasto = t;
}

double Despesa::getValor()
{
    return valor;
}

string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}
