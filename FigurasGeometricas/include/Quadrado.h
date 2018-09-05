#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(float lado);

    protected:

    private:
        float lado;
        float calcularArea(float lado);
};

#endif // QUADRADO_H
