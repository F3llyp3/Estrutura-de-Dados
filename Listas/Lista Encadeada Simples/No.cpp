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

void No::setProx(No* p){
    prox = p;
}
No* No::getProx(){
    return  prox;
}