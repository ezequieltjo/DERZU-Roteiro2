#include <iostream>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Triangulo tri1 = Triangulo(10, 10);
    Quadrado qua1 = Quadrado(5);
    Circulo cir1 = Circulo(10);

    cout << tri1.calcularArea() << endl;
    cout << qua1.calcularArea() << endl;
    cout << cir1.calcularArea() << endl;

    return 0;
}
