#include "Pedido.h"

Pedido::Pedido(){

}

Pedido::Pedido(int numero, std::string descricao, int quantidade, float preco)
{
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;
}

int Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade (){
    return quantidade;
}

float Pedido::getPreco(){
    return preco;
}

std::string Pedido::toString(){

    std::stringstream n;
    std::stringstream p;
    std::stringstream q;

    n<<numero;
    q<<quantidade;
    p<<preco;

     return n.str() + " - " + descricao + " - " + q.str() + " - " + p.str();
}
