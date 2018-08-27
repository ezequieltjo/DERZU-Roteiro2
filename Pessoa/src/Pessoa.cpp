#include "Pessoa.h"

Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
{
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}
