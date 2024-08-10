#include <iostream>

using namespace std;

class No {
    private:
        int conteudo;
        No* prox;
    public:
        No();
        void setProx(No* p);
        No* getProx();
        void setConteudo(int n);
        int getConteudo();
};

No::No() {
    prox = nullptr;
}

void No::setConteudo(int n) {
    conteudo = n;
}

int No::getConteudo() {
    return conteudo;
}

void No::setProx(No* p) {
    prox = p;
}

No* No::getProx() {
    return prox;
}

class Lista_Encadeada {
    private:
        No *cabeca;
        int tamanho;
        bool InsereInicioLista(int dado);
        bool InsereMeioLista(int pos, int dado);
        bool InsereFimLista(int dado);
        int removeInicioLista();
        int removeNaLista(int pos);

    public:
        Lista_Encadeada();
        ~Lista_Encadeada();
        bool vazia();
        int getTamanho();
        int elemento(int n);
        int posicao(int dado);
        bool insere(int pos, int dado);
        bool remove(int pos);
};

Lista_Encadeada::Lista_Encadeada() {
    cabeca = nullptr;
    this->tamanho = 0;
}

Lista_Encadeada::~Lista_Encadeada() {
    // Implementar a lógica de destruição, se necessário.
}

bool Lista_Encadeada::vazia() {
    return this->tamanho == 0;
}

int Lista_Encadeada::getTamanho() {
    No *p = cabeca;
    int cont = 0;
    while (p != nullptr) {
        p = p->getProx();
        cont++;
    }
    return cont;
}

int Lista_Encadeada::elemento(int n) {
    No *aux = cabeca;
    int cont = 1;
    if (vazia()) return -1;

    if (n < 1 || n > tamanho) return -1;

    while (cont < n) {
        aux = aux->getProx();
        cont++;
    }
    return aux->getConteudo();
}

int Lista_Encadeada::posicao(int dado) {
    int cont = 1;
    No *aux;

    if (vazia()) return 0;

    aux = cabeca;
    while (aux != nullptr) {
        if (aux->getConteudo() == dado) {
            return cont;
        }
        aux = aux->getProx();
        cont++;
    }
    return -1;
}

bool Lista_Encadeada::InsereInicioLista(int dado) {
    No* novoNo = new No();
    novoNo->setConteudo(dado);
    novoNo->setProx(cabeca);
    cabeca = novoNo;
    tamanho++;
    return true;
}

bool Lista_Encadeada::InsereMeioLista(int pos, int dado) {
    int cont = 1;
    No* novoNo = new No();
    novoNo->setConteudo(dado);

    No* aux = cabeca;
    while ((cont < pos - 1) && (aux != nullptr)) {
        aux = aux->getProx();
        cont++;
    }
    if (aux == nullptr) return false;

    novoNo->setProx(aux->getProx());
    aux->setProx(novoNo);
    tamanho++;
    return true;
}

bool Lista_Encadeada::InsereFimLista(int dado) {
    No* novoNo = new No();
    novoNo->setConteudo(dado);

    No* aux = cabeca;
    while (aux->getProx() != nullptr) {
        aux = aux->getProx();
    }
    novoNo->setProx(nullptr);
    aux->setProx(novoNo);
    tamanho++;
    return true;
}

bool Lista_Encadeada::insere(int pos, int dado) {
    if (vazia() && (pos != 1)) return false;

    if (pos == 1) {
        return InsereInicioLista(dado);
    } else if (pos == tamanho + 1) {
        return InsereFimLista(dado);
    } else {
        return InsereMeioLista(pos, dado);
    }
}

int Lista_Encadeada::removeInicioLista() {
    No* p = cabeca;
    int dado = p->getConteudo();

    cabeca = p->getProx();
    tamanho--;

    delete p;

    return dado;
}

int Lista_Encadeada::removeNaLista(int pos) {
    No *atual, *antecessor;
    atual = antecessor = nullptr;
    int dado, cont;
    dado = -1;
    cont = 1;

    atual = cabeca;
    while ((cont < pos) && (atual != nullptr)) {
        antecessor = atual;
        atual = atual->getProx();
        cont++;
    }
    if (atual == nullptr) return -1;

    dado = atual->getConteudo();
    antecessor->setProx(atual->getProx());
    tamanho--;

    delete atual;
    return dado;
}
