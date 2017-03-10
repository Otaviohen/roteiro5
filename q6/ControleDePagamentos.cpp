#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;


ControleDePagamentos::ControleDePagamentos()
{
    total = 0;
}

double ControleDePagamentos::calculaTotalPagamentos()
{
    for(int i = 0; i < 2;  i++){
        total = total + pagamentos[i].getPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario)
{
    for(int i = 0; i < 2; i++){
        if(strcmp(nomeFuncionario, pagamentos[i].getNomeDoFuncionario) == 0){
            return true;
        }
        else
            return false;
    }
}
