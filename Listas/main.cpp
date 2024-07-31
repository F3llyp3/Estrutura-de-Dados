#include "listaSeq.cpp"

int main(void){
    Lista_Sequencial lista1;
    
    for(int i=0; i<10; i++){
        lista1.inserir_Elemento(i+1);
    }

    for (int i = 0; i < lista1.tamanho_Lista(); i++)
    {
        cout << lista1.obter_Valor(i+1) << endl;
    }
    
    
    return 0;
}