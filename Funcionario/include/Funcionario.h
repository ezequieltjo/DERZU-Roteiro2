#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    protected:
        float salario;
        std::string nome, matricula;

    public:
        Funcionario();
        Funcionario(std::string matricula, std::string nome, float salario);
        std::string getMatricula();
        void setMatricula(std::string matricula);
        std::string getNome();
        void setNome(std::string nome);
        float getSalario();
        void setSalario(float salario);

};

#endif // FUNCIONARIO_H
