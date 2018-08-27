#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    private:
        int numero, quantidade;
        float preco;
        std::string descricao;

    public:
        Pedido();
        Pedido(int numero, std::string descricao, int quantidade, float preco);
        int getNumero();
        std::string getDescricao();
        int getQuantidade ();
        float getPreco();

};

#endif // PEDIDO_H
