#ifndef FILASEQ_H
#define FILASEQ_H
#include <iostream>
using namespace std;

class filaSeq{
    private:
        int inicio;
        int fim;
        int *dados;
        int nElementos;
        int tamMax;
    public: 
        filaSeq();
        bool vazia();
        bool cheia();
        int tamanho();
        int primeiro();
        bool insere(int valor);
        int remove();
};
#endif