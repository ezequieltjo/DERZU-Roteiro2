#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(int m, Pedido p){
    mesas[m].adicionaAoPedido(p);
}

float RestauranteCaseiro::calculaTotalRestaurante(){
    float total=0;
    for(int i=0; i<100; i++){
        total+=mesas[i].calculaTotal();

    }
    return total;
}
