#include <iostream>
#include <cstdio>
#include <cstring>

int main(){

    using namespace std;

    FILE *f;

    f = fopen("arquivo.txt", "w");

    if(f == NULL){
        cout << "Erro na abertura do arquivo. \n";
        exit(1);
    }
    
    string mensagem;
    
    cout << "Digite uma mensagem.\n";
    getline(cin, mensagem); //função para ler a string do usuário

    for(int i = 0; i < mensagem.size(); i++){
        fputc(mensagem[i],f);
    }

    fclose(f);
    return 0;
}