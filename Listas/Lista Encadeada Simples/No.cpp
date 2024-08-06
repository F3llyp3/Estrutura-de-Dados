#include "No.h"

No::No(){
    prox = nullptr;
}

void No::setConteudo(int n){
    conteudo = n;
}
int No::getConteudo(){
    return conteudo;
}

void No::setProx(int* p){
    prox = p;
}
int No::getProx(){
    return  *prox;
}