#include "No.cpp"

class Lista_Encadeada{
    
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