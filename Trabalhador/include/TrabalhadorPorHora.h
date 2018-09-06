#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(float valorDaHora);
        float valorDaHora;
        int hora;
        float calcularSalarioSemanal(int hora);
};

#endif // TRABALHADORPORHORA_H
