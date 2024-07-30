#include <iostream>
#include <fstream>

using namespace std;
int main(void){
ifstream num("C:/Users/felly/Documents/Estrutura de dados/Ordenaçãocpp/entrada.txt");
string linha;
//num.open("entrada.txt");

if(num.is_open()){
    while(getline(num, linha)){
        cout << linha << endl;
    }
}
else{ cout << "Nao foi possivel abrir o arquivo" << endl;}
}
