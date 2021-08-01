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
        if(isalpha(c) > 0){//isalpha -> função para indentificar se o caracter é uma letra, retornando um valor maior que zero. 
            switch (c)
            {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            break;
            
            default:
                cout << c;
                break;
            }
        }
        c = fgetc(f);
    }

    fclose(f);

    return 0;
}