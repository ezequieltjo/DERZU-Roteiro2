#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    private:
        std::string nome, matricula;
        float salario;

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
