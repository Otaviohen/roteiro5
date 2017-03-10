#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;


class Pessoa
{
    public:
        Pessoa(string n);
        Pessoa(string n, string t, int i);
        void setNome(string n);
        void setTelefone(string t);
        void setIdade(int i);
        string getNome();
        string getTelefone();
        int getIdade();

    protected:

    private:
        string nome;
        string telefone;
        int idade;
};

#endif // PESSOA_H
