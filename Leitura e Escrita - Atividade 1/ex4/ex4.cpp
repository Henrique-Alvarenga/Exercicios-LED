#include <iostream>
#include <cstdio>

    int main(){
        
        using namespace std;

        char nomeAquivoOrigem[50];
        FILE *arquivoOrigem, *arquivoDestino;

        cout << "Digite o nome do arquivo.\n";
        cin >> nomeAquivoOrigem;
        
        arquivoOrigem = fopen(nomeAquivoOrigem, "r");

        if(arquivoOrigem == NULL){
            cout << "ARQUIVO INEXISTENTE\n";
            exit(1);
        }

        arquivoDestino = fopen("destino.txt", "w");

        if(arquivoOrigem == NULL){
            cout << "Erro na abertura do arquivo.\n";
            exit(1);
        }

        char c = fgetc(arquivoOrigem);
        while(!feof(arquivoOrigem)){

            if(isalpha(c) > 0){
                switch (c)
                {
                case 'z':
                    fputc('a', arquivoDestino);
                    break;
                case 'Z':
                    fputc('A', arquivoDestino);
                    break;
                default:
                    fputc(c+1, arquivoDestino);
                    break;
                }
            }
            else{
                fputc(c, arquivoDestino);
            }
            
            c = fgetc(arquivoOrigem);
    }
    fclose(arquivoOrigem);
    fclose(arquivoDestino);
    }