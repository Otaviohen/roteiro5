#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int d, int m, int a)
{
    if(d >= 1 && d <= 31){
        setDia(d);
    }else{
        cout << "Dia invalido!"<< endl;
    }
    if(m >= 1 && m <= 12){
        setMes(m);
    }else{
        cout << "Mes invalido!" << endl;
    }
    if(a < 0){
        cout << "ano invalido!" << endl;
    }else{
        setAno(a);
    }
}
void Data::setDia(int d)
{
    dia = d;
};
void Data::setMes(int m)
{
    mes = m;
};
void Data::setAno(int a)
{
    ano = a;
};
int Data::getDia()
{
    return dia;
};
int Data::getMes()
{
    return mes;
};
int Data::getAno()
{
    return ano;
};
int Data::avancaDia()
{
    dia++;
    return dia;
};
