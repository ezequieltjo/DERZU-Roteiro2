#include "Consultor.h"

Consultor::Consultor()
{
    matricula = nome = "";
    salario = percentual = 0;
}

Consultor::Consultor(std::string matricula, std::string nome, float salario, float percentual)
{
    this->matricula = matricula;
    this->nome = nome;
    this->salario = salario;
    this->percentual = percentual;
}

float Consultor::getSalario(){
    return salario*1.1;
}

float Consultor::getSalario(float percentual){
    return salario + (salario*(percentual/100));
}
