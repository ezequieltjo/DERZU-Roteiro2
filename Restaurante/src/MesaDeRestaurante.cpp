#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    iAtual = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    pedidos[iAtual] = p;
    iAtual++;
}

float MesaDeRestaurante::calculaTotal(){
    float total=0;
    for(int i=0; i<iAtual; i++){
        total += (pedidos[i].getPreco() * pedidos[i].getQuantidade());
    }
    return total;
}

void MesaDeRestaurante::zeraPedidos(){

    iAtual=0;
}

std::string MesaDeRestaurante::toString(){
    std::string retorno="";
    for (int i=0; i<iAtual; i++){
        retorno += "\n" + pedidos[i].toString();
    }
    return retorno;
}
