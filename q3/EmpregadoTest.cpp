#include "EmpregadoTest.h"
#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int EmpregadoTest::main()
{
    Empregado e1("otavio", "henrique", 1000.0);
    Empregado e2("milena", "besta", 500.0);
    cout << "Empregado 1: " << e1.getSalario() << endl;
    cout << "Empregado 2: " << e2.getSalario() << endl;
    e1.setSalario(e1.getSalario()*1.1);
    e2.setSalario(e2.getSalario()*1.1);
    cout << "Empregado 1: " << e1.getSalario() << endl;
    cout << "Empregado 2: " << e2.getSalario() << endl;
}


