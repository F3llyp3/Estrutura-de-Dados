#include <iostream>

using namespace std;

class No{
    private:
        int conteudo;
        int* prox;
    public:
        No();
        void setProx(int* p);
        No* getProx();
        void setConteudo(int n);
        int getConteudo();      
};