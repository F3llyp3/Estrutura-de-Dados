#include "ListaEnc.h"

Lista_Encadeada::Lista_Encadeada(){
    cabeca = nullptr;
    this->tamanho = 0;
}

Lista_Encadeada::~Lista_Encadeada(){
    //delete p;
}

bool Lista_Encadeada::vazia(){
    if(this->tamanho==0) return true;
    else return false;
}

int Lista_Encadeada::getTamanho(){
    No *p = cabeca;
    int cont = 0;
    while(p != nullptr){
        p = p->getProx();
        cont++;
    }
    return cont;
}

int Lista_Encadeada::elemento(int n){
    No *aux = cabeca;
    int cont = 1;
    if(vazia()) return -1;

    if(n < 1 || n > tamanho) return -1;

    while(cont<n){
        aux = aux->getProx();
        cont++;
    }
    return aux->getConteudo();
}

int Lista_Encadeada::posicao(int dado){
    int cont = 1;
    No *aux;

    if(vazia()) return 0; 

    aux = cabeca;
    while(aux!=nullptr){
        if(aux->getConteudo()==dado){
            return cont;
        }
        aux = aux->getProx();
        cont++;
    }
    return -1;
}
/*bool Lista_Encadeada::InsereInicioLista(int dado){
    No novoNo = new No();

    novoNo.setConteudo(dado);
    novoNo.setProx(cabeca);
    cabeca = novoNo;
    temanho++;
    return true;
}

bool Lista_Encadeada::InsereMeioLista(int pos, int dado){
    int cont = 1;
    No novoNo = new No();
    novoNo.setConteudo(dado);

    No aux = cabeca;
    while((cont < pos - 1) && (aux != nullptr)){
        aux = aux.getProx();
        cont++;
    }
    if(aux == nullptr) return false;

    novoNo.setProx(aux.getProx());
    aux.setProx(novoNo);
    tamanho++;
    return true;
}

bool Lista_Encadeada::InsereFimLista(int dado){
    No novoNo = new No();
    novoNo.setConteudo(dado);

    No aux = cabeca;
    while(aux.getProx() != nullptr){
        aux = aux.getProx();
    }
    novoNo.setProx(nullptr);
    aux.setProx(novoNo);
    tamanho++;
    return true;
}

bool Lista_Encadeada::insere(){
    if(vazia() && (pos!=1)) return false;

    if(pos==1){
        return insereInicioLista(dado);
    }
    else if(pos == tamanho+1){
        return insereFimLista(dado);
    }
    else{
        return insereMeioLista(dado);
    }
}

int Lista_Encadeada::removeInicioLista(){
    No p = cabeca;
    int dado = p.getConteudo();

    cabeca = p.getProx();
    tamanho--;

    ~Lista_Encadeada(p);

    return dado;
}

int Lista_Encadeada::removeNaLista(int pos){
    No atual, antescessor;
    atual = antescessor = nullptr;
    int dado, cont;
    dado = -1;
    cont = 1;

    atual = cabeca;
    while((cont < pos) && (atual != nullptr)){
        antescessor = atual;
        atual = atual.getProx();
        cont++;
    }
    if(atual==nullptr) return -1;
    dado = atual.getConteudo();
    antescessor.setProx(atual.getProx());
    tamanho--:

    ~Lista_Encadeada(atual);
    return dado;
}*/