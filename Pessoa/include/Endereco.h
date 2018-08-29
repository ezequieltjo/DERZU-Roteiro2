#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#include <sstream>

class Endereco
{
    private:
        std::string rua, bairro, cidade, estado, cep;
        int numero;

    public:
        Endereco();
        Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep);


};

#endif // ENDERECO_H
