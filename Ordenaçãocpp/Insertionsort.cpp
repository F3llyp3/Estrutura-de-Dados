#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(void){
    ifstream num;
    string linha;
    vector <int> vetor;
    
    num.open("../entrada.txt");
    

    if(num.is_open()){
        while(getline(num, linha)){
            int n = stoi(linha);
            vetor.push_back(n);
        }
    }
    else{ cout << "Nao foi possivel abrir o arquivo" << endl;}

    int aux =0;

    for (int i = 1; i<vetor.size(); i++){ 
        for(int j=i; j>0; j--){
            if (vetor[j] < vetor[j-1]){
                aux = vetor[j];
                vetor[j]= vetor[j-1];
                vetor[j-1] = aux;
        }
        }
    }
    
    for(int i =0; i<vetor.size(); i++){
        cout << vetor[i] << endl;
    }
    
    return 0;
}
    