#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice t(2, "pao", 10, 1.3);
    cout << t.getDescricao() << endl;


    return 0;
}
