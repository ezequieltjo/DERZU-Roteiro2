#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"
#include <string>

class Consultor: public Funcionario
{
    private:
        float percentual;

    public:
        Consultor();
        Consultor(std::string matricula, std::string nome, float salario, float percentual);
        float getSalario();
        float getSalario(float percentual);


};

#endif // CONSULTOR_H
