#include <iostream>
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p;
    RestauranteCaseiro rest = RestauranteCaseiro();

    p = Pedido(1, "Hotdog", 2, 2.00);
    rest.adicionaAoPedido(0, p);

    p = Pedido(2, "Lasanha", 1, 20.00);
    rest.adicionaAoPedido(1, p);

    p = Pedido(3, "Cuzcuz", 4, 5.00);
    rest.adicionaAoPedido(1, p);

    cout << rest.buscaMesaID(1).toString() << endl; //a fun�ao toString ir� printar os pedidos na mesa 1
    return 0;
}
