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

    if(lista1.lista_Vazia()){
        cout << "A lista esta vazia" << endl;
    }else{cout <<"A lista esta nao esta vazia" << endl;}

    if(lista1.lista_Cheia()){
        cout << "A lista esta cheia" << endl;
    }else{cout << "A lista nao esta cheia" << endl;}

    lista1.modificar_Valor(1,999);
    lista1.obter_Valor(1);
    lista1.retirar_Elemento(5);

    for (int i = 0; i < lista1.tamanho_Lista(); i++)
    {
        cout << lista1.obter_Valor(i+1) << endl;
    }
    
    //teste
    return 0;
}