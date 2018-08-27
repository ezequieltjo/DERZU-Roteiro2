#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
    private:
        std::string  nome, telefone;
        Endereco endereco;
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);

        std::string getNome();
        void setNome(std::string nome);
        Endereco getEndereco();
        void setEndereco(Endereco endereco);
        std::string getTelefone();
        void setTelefone(std::string telefone);
};

#endif // PESSOA_H
