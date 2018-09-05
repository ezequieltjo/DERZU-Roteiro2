#include <iostream>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Triangulo tri1 = Triangulo();
    Quadrado qua1 = Quadrado();
    Circulo cir1 = Circulo();

    cout << tri1.calcularArea(10,10) << endl;
    cout << qua1.calcularArea(5) << endl;
    cout << cir1.calcularArea(5) << endl;

    return 0;
}
