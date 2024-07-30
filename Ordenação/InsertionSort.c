#include <stdio.h>

int main(){
    int vetor[] = {2,3,1,6,8,9,7,4,10,5};

    int aux =0;

    for (int i = 1; i<10; i++){ 
        for(int j=i; j>0; j--){
            if (vetor[j] < vetor[j-1]){
                aux = vetor[j];
                vetor[j]= vetor[j-1];
                vetor[j-1] = aux;
        }
        }
    }
        for(int i=0; i<10; i++){
            printf("%d\n", vetor[i]);
        }
        
    return 0;
    //teste
}
