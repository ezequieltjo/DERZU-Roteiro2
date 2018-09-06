#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    nome = "";
    salario = 0;
}

Trabalhador::Trabalhador(std::string nome, float salario)
{
    this->nome = nome;
    this->salario = salario;
}

float Trabalhador::calcularSalarioSemanal(){

}
