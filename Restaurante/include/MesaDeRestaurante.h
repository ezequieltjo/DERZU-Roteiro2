#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    private:
        Pedido pedidos[100];
        int iAtual;

    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        float calculaTotal();
        std::string toString();

};

#endif // MESADERESTAURANTE_H
