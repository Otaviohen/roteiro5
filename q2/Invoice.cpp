#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

Invoice::Invoice(int n, string d, int q, double p)
{
    setNumero(n);
    setDescricao(d);
    setQuantidade(q);
    setPreco(p);
}

void Invoice::setNumero(int n)
{
    numero = n;
}

void Invoice::setDescricao(string d)
{
    descricao = d;
}

void Invoice::setQuantidade(int q)
{
    quantidade = q;
}

void Invoice::setPreco(double p)
{
    preco = p;
}

int Invoice::getNumero()
{
    return numero;
}

string Invoice::getDescricao()
{
    return descricao;
}

int Invoice::getQuantidade()
{
    return quantidade;
}

double Invoice::getPreco()
{
    return preco;
}

double Invoice::getInvoiceAmount()
{
    if(quantidade <= 0){
        return 0;
    }
    if(preco < 0){
        return 0.0;
    }
    else{
        return getQuantidade()*getPreco();
    }
}





















