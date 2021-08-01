#include <iostream>
#include <cstdio>
#include <vector>

int main(){
    using namespace std;

    vector<char> vetorPalavra;
    char nomeDoArquivo [100], letra;
    FILE *f;
    int i = 0;

    cout << "Digite o nome do arquivo.\n";
    cin >> nomeDoArquivo;

    f = fopen(nomeDoArquivo, "r");
        if(f == NULL){
            cout << "ARQUIVO INEXISTENTE\n";
            exit(1);
    }

      while(!feof(f)){ 
        letra = fgetc(f);
        
        if((letra >= 48 && letra <= 57) || isalpha(letra) > 0 || letra == ' '){
            vetorPalavra.push_back(letra);
        } 
    }
    for(int i = vetorPalavra.size(); i >= 0; i--){
        if(vetorPalavra[i] == ' ' || i == 0){
        for(int j = i+1; j < vetorPalavra.size(); j++){
            if(vetorPalavra[j] != ' '){
                cout << vetorPalavra[j];
                }
            else{
                break;
            }
        }
            cout << " ";
        }
    }

    fclose(f);
    return 0;
}