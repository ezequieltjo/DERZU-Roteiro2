#include "Endereco.h"

Endereco::Endereco(){

}

Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}


