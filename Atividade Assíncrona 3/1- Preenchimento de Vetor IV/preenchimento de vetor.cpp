#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){

    vector<int> vetorPar(5), vetorImpar(5);
    int valor = 0, contPar = 0, contImpar = 0;

    for(int i = 0; i < 15; i++){
        cin >> valor;

        if(valor%2 == 0){
            vetorPar[contPar] = valor;
            contPar++;
        }
        else{
            vetorImpar[contImpar] = valor;
            contImpar++;
        }
        if(contPar == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << vetorPar[j] << "\n";
            }
            contPar = 0;
        }
        if(contImpar == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << vetorImpar[j] << "\n";
            }
            contImpar = 0;
        }
    }
    for(int i = 0; i < contImpar; i++){
        cout << "impar[" << i << "] = " << vetorImpar[i] << "\n";
    }
    for(int i = 0; i < contPar; i++){
        cout << "par[" << i << "] = " << vetorPar[i] << "\n";
    }

    return 0;
}