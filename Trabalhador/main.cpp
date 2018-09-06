#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    TrabalhadorPorHora tra1 = TrabalhadorPorHora(500);
    TrabalhadorAssalariado tra2 = TrabalhadorAssalariado("jao", 1500);

    cout << tra1.calcularSalarioSemanal(41) << endl;
    cout << tra2.calcularSalarioSemanal() << endl;

    return 0;
}
