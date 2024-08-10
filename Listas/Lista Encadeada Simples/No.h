#include <iostream>

using namespace std;

class No{
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
