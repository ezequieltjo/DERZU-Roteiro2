#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(std::string nome, float salario);
        std::string nome;
        float salario;
        float calcularSalarioSemanal();
};

#endif // TRABALHADOR_H
