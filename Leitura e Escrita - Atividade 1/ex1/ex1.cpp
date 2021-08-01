#include <cstdio>
#include <iostream>

int main(){

    using namespace std;

    char nomeDoArquivo[50];
    FILE *f;

    cout << "Digite o nome do arquivo.\n";
    cin >> nomeDoArquivo;

    f = fopen(nomeDoArquivo, "r");

    if(f == NULL){
        cout << "ARQUIVO INEXISTENTE\n";
        exit(1);
    }
    
    char c = fgetc(f);
    while(!feof(f)){
        cout << c;
        c = fgetc(f);
    }

    fclose(f);
    return 0;
}