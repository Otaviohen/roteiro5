#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

using namespace std;



class Invoice
{
    public:
        Invoice(int n, string d, int q, double p);
        void setNumero(int n);
        void setDescricao(string d);
        void setQuantidade(int q);
        void setPreco(double p);
        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();
        double getInvoiceAmount();

    protected:

    private:
        int numero;
        string descricao;
        int quantidade;
        double preco;

};

#endif // INVOICE_H
