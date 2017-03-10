#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;


class Empregado
{
    public:
        Empregado(string n, string s, double sa);
        void setNome(string n);
        void setSobrenome(string s);
        void setSalario(double sa);
        string getNome();
        string getSobrenome();
        double getSalario();

    protected:

    private:
        string nome;
        string sobrenome;
        double salario;
};

#endif // EMPREGADO_H
