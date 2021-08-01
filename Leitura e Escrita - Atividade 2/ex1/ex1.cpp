#include <iostream>
#include <cstdio>
#include <vector>

int main(){
    using namespace std;

    vector<char> vetorLetras;
    char nomeDoArquivo [100], letra;
    FILE *f;

    cout << "Digite o nome do arquivo.\n";
    cin >> nomeDoArquivo;

    f = fopen(nomeDoArquivo, "r");
        if(f == NULL){
            cout << "ARQUIVO INEXISTENTE\n";
            exit(1);
    }
    while(!feof(f)){ 
        letra = fgetc(f);
        if(isalpha(letra) > 0){
            vetorLetras.push_back(letra);
        }  
    }
    
    for(int i = 0; i < vetorLetras.size(); i++){
        cout << vetorLetras[i] << " ";
    }
    fclose(f);
    return 0;
}