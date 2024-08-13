#include "filaSeq.h"

filaSeq::filaSeq(){
    inicio = 0;
    fim = -1;
    nElementos = 0;
    tamMax = 100;
    dados = new int[tamMax];
}

bool filaSeq::vazia(){
    if(nElementos == 0){
        return true;
    }else {return false;}
}

bool filaSeq::cheia(){
    if(nElementos==tamMax){
        return true;
    }else{ return false; }
}
int filaSeq::tamanho(){
    return nElementos;
}
int filaSeq::primeiro(){
    if(vazia()) return -1;
    return dados[inicio];
}
bool filaSeq::insere(int valor){
    if(cheia()) return false;

    fim = (fim+1) % tamMax;
    dados[fim] = valor;

    nElementos++;
    return true;
}
int filaSeq::remove(){
    if(vazia()) return -1;

    int res = primeiro();
    inicio = (inicio+1) % tamMax;
    nElementos--;
    return res;
}