#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    //ctor
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, float salario)
{
    this->nome = nome;
    this->salario = salario;
}

float TrabalhadorAssalariado::calcularSalarioSemanal(){
    return salario/4;
}
