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

std::string Endereco::toString(){
    std::stringstream r, n, b, c, e, ce;

    r << rua;
    n << numero;
    b << bairro;
    c << cidade;
    e << estado;
    ce << cep;

    return r.str() + " - " + n.str() + " - " + b.str() + " - " + c.str() + " - " + e.str() + " - " + ce;
}
