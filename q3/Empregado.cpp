#include "Empregado.h"
#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(string n, string s, double sa)
{
    setNome(n);
    setSobrenome(s);
    setSalario(sa);
}

void Empregado::setNome(string n)
{
    nome = n;
}

void Empregado::setSobrenome(string s)
{
    sobrenome = s;
}

void Empregado::setSalario(double sa)
{
    if(sa < 0){
        cout << "Valor invalido! " << endl;
    }
    else{
        salario = sa;
    }
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

double Empregado::getSalario()
{
    return salario;
}
