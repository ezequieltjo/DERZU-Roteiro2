#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main()
{
    Endereco end1 = Endereco("Rua Francisco", 71, "Centro", "Itaporanga", "Paraiba", "58780000");
    Endereco end2 = Endereco("Rua Josina", 188, "Mangabeira", "Joao Pessoa", "Paraiba", "58055260");

    Pessoa pess1 = Pessoa("Ana");
    Pessoa pess2 = Pessoa("Monica", end2, "8362428462");

    return 0;
}
