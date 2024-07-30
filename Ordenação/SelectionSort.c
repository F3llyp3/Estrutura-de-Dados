#include <stdio.h>

    int main(){
        int vetor[] = {2,3,1,6,8,9,7,4,10,5};
        //int n = sizeof(vetor);

        int aux; //variavel auxiliar

        for(int i=0; i<10; i++){
            for(int j=0; j<9; j++){
                if(vetor[i]<vetor[j]){
                    aux = vetor[j];
                    vetor[j] = vetor[i];
                    vetor[i] = aux;
                }
               
            }
        }

        for(int i=0; i<10; i++){
                printf("%d\n", vetor[i]);
        }
           
        return 0;
    }
