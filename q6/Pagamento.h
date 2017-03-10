#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>
#include <string>

using namespace std;


class Pagamento
{
    public:
        Pagamento();
        void setPagamento(double p);
        void setNomeDoFuncionario(string n);
        double getPagamento();
        string getNomeDoFuncionario();

    protected:

    private:
        double valorPagamento;
        string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
