#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(float raio);

        float raio;
        float calcularArea(float raio);
};

#endif // CIRCULO_H
