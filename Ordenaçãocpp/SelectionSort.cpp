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

    for(int i=0; i<vetor.size(); i++){
            for(int j=0; j<vetor.size()-1; j++){
                if(vetor[i]<vetor[j]){
                    aux = vetor[j];
                    vetor[j] = vetor[i];
                    vetor[i] = aux;
                }
               
            }
        }
    
    for(int i =0; i<vetor.size(); i++){
        cout << vetor[i] << endl;
    }
    
    return 0;
}