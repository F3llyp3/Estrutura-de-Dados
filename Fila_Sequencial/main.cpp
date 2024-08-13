#include "filaSeq.cpp"

int main(void){
    
    filaSeq fila1;

    for(int i=0; i<5; i++){
        fila1.insere(2+i);
    }
    cout << fila1.primeiro() << endl;
    fila1.remove();
    cout << fila1.primeiro() << endl;
    cout << fila1.vazia() << endl;
    cout << fila1.cheia() << endl;
}