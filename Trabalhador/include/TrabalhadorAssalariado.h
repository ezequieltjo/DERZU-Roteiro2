#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string nome, float salario);
        float calcularSalarioSemanal();
};

#endif // TRABALHADORASSALARIADO_H
