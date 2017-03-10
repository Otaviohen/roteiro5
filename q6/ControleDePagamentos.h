#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;



class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        double calculaTotalPagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);

    protected:

    private:
        double total;
        Pagamento pagamentos[2];

};

#endif // CONTROLEDEPAGAMENTOS_H
