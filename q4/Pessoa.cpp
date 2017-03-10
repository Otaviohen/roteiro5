#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string n)
{
    setNome(n);
}

Pessoa::Pessoa(string n, string t, int i)
{
    setNome(n);
    setTelefone(t);
    setIdade(i);
}

void Pessoa::setNome(string n)
{
    nome = n;
}

void Pessoa::setTelefone(string t)
{
    telefone = t;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}

int Pessoa::getIdade()
{
    return idade;
}


