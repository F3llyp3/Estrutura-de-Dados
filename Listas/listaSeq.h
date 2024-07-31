#ifndef LISTA_SEQ_H
#define LISTA_SEQ_H
#include <iostream>

using namespace std;

class Lista_Sequencial{
    private:
        int tamAtual;
        int tamMax;
        int *dados;
    public:
        Lista_Sequencial();
        int lista_Vazia();
        int lista_Cheia();
        int tamanho_Lista();
        int obter_Valor(int indice);
        void modificar_Valor(int indice, int num);
        void inserir_Elemento(int n);
        void retirar_Elemento(int indice);
};
#endif 