#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){

    int numeroJogadores, sTotal = 0, bTotal = 0, aTotal = 0, sSucesso = 0, bSucesso = 0, aSucesso = 0, aux = 0;
    string nome;

    cin >> numeroJogadores;
    for(int i = 0; i < numeroJogadores; i++){
        cin >> nome;
        cin >> aux;
        sTotal += aux;
        cin >> aux;
        bTotal += aux;
        cin >> aux;
        aTotal += aux;
        cin >> aux;
        sSucesso += aux;
        cin >> aux;
        bSucesso += aux;
        cin >> aux;
        aSucesso += aux;
    }
    printf("Pontos de Saque: %.2f %%.\n", (100 * (float)sSucesso)/(float)sTotal);
    printf("Pontos de Bloqueio: %.2f %%.\n", (100 * (float)bSucesso)/(float)bTotal);
    printf("Pontos de Ataque: %.2f %%.\n", (100 * (float)aSucesso)/(float)aTotal);
    return 0;
}