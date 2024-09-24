#include <iostream>
#include <fstream>
#include <vector>
#include <list> 

using namespace std;



typedef struct{
    int pai;
    int dist;
    char cor;
}vertice;

int main(void){
    
    ifstream file("../pcv4.txt");
    if(!file.is_open()){
        cerr << "ERRO AO ABRIR ARQUIVO" << endl;
    }
    int n;

    file >> n; // lendo o tamanho da matriz
    int matriz[n][n];

    for(int i=0; i<n; i++){  // LENDO DO ARQUIVO
        for(int j=0; j<n; j++){
            file >> matriz[i][j];
        }
    }
    file.close();

    vector<list<int>> vizinhos(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(matriz[j][i] != 0){
            vizinhos[i].push_back(j);
           }
        }
    }

    
    //bfs(n, matriz);

    for(const auto& teste : vizinhos[0]){
        cout << teste << endl;
    }
    return 0;
}