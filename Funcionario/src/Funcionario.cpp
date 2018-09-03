#include "Funcionario.h"

Funcionario::Funcionario()
{
    matricula = nome = "";
    salario = 0;
}

Funcionario::Funcionario(std::string matricula, std::string nome, float salario)
{
    this->matricula = matricula;
    this->nome = nome;
    this->salario = salario;
}

std::string Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setMatricula(std::string matricula){
    this->matricula = matricula;
}

std::string Funcionario::getNome(){
    return nome;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}

