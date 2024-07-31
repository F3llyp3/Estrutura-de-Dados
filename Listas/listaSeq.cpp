#include "listaSeq.h" 

Lista_Sequencial::Lista_Sequencial(){
    tamMax = 100;
    tamAtual = 0;
    dados = new int[tamMax];
}

int Lista_Sequencial::lista_Vazia(){
    if (tamAtual == 0){
        return 1;
    }else return -1;
}

int Lista_Sequencial::lista_Cheia(){
    if (tamAtual == tamMax){
        return 1;
    }else return 0;
}
int Lista_Sequencial::tamanho_Lista(){
    return tamAtual;
}
int Lista_Sequencial::obter_Valor(int indice){
    return dados[indice-1];
}
void Lista_Sequencial::modificar_Valor(int indice, int num){
    dados[indice] = num;
}
void Lista_Sequencial::inserir_Elemento(int n){
    if(lista_Cheia()==0){
        dados[tamAtual] = n;
        tamAtual++;
    }
}
void Lista_Sequencial::retirar_Elemento(int indice){
    if(indice>=0 && indice<=tamAtual){
        for(int i=indice; i<tamAtual-1; i++){
            dados[i] = dados[i+1];
        }
        tamAtual--;
    }
}
