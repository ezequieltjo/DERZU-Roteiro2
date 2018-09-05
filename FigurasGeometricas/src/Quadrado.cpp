#include "Quadrado.h"

Quadrado::Quadrado()
{
    //ctor
}

Quadrado::Quadrado(float lado)
{
    this->lado=lado;
}

float Quadrado::calcularArea(float lado){
    return lado*lado;
}
