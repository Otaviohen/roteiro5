#include "CadastroDePessoas.h"
#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int CadastroDePessoas::main()
{
    Pessoa p1("otavio", "988728649", 20);
    Pessoa p2("fulano", "124124124", 30);
    cout << p1.getNome() << endl;

}
