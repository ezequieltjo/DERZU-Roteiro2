#include "Triangulo.h"

Triangulo::Triangulo()
{
    //ctor
}

Triangulo::Triangulo(float base, float altura)
{
    this->base=base;
    this->altura=altura;
}

float Triangulo::calcularArea(float base, float altura){
    return (base*altura)/2;
}
