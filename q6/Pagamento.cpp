#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;

Pagamento::Pagamento()
{
    //ctor
}

void Pagamento::setPagamento(double p)
{
    valorPagamento = p;
}

void Pagamento::setNomeDoFuncionario(string n)
{
    nomeDoFuncionario = n;
}

double Pagamento::getPagamento()
{
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}
