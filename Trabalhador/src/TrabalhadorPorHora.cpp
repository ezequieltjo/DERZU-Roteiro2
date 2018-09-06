#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{

}

TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora)
{
    salario=valorDaHora;
}

float TrabalhadorPorHora::calcularSalarioSemanal(int hora){
    float extra=0;
    if (hora<40){
        return salario*hora;
    }
    else{
        extra = (hora-40)*1.5*salario;

        return (salario*40) + extra;
    }
}
