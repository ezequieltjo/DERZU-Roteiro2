#include "Circulo.h"

Circulo::Circulo()
{
    //ctor
}

Circulo::Circulo(float raio)
{
   this->raio=raio;
}

float Circulo::calcularArea(float raio){
    return 3.14*(raio*raio);
}
