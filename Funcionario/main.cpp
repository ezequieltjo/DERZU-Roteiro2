#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario fun1 = Funcionario("2316", "Joao", 1000);
    Consultor con1 = Consultor("6251", "Maria", 1000, 70);
    Consultor con2 = Consultor("5263", "Ana", 1000, 50);

    cout << "Maria: " << con1.getSalario(30) << endl; //aumentando em 30% o salario de maria
    cout << "Ana: " << con2.getSalario() << endl; // e agora aumentando o salario de ana com o valor padrao de 10%
    cout << "Joao: " << fun1.getSalario() << endl; // vendo q o salario de joao nao é atualizado pq eh do tipo funcionario

    return 0;
}
