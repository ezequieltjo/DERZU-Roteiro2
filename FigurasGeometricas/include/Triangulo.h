#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(float base, float altura);
        float calcularArea(float base, float altura);

    protected:

    private:
        float base, altura;
};

#endif // TRIANGULO_H
