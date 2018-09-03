#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesas[100];


    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int m, Pedido p);
        float calculaTotalRestaurante();
        MesaDeRestaurante buscaMesaID (int i);

};

#endif // RESTAURANTECASEIRO_H
