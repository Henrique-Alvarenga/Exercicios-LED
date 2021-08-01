#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    
    int numeroDeLesmas, maior = 0;

        while (scanf("%d", &numeroDeLesmas) != EOF){
            vector<int> velocidadeLesmas(numeroDeLesmas);
            for(int i = 0; i < numeroDeLesmas; i++){
                cin >> velocidadeLesmas[i];
            }
            maior = velocidadeLesmas[0];
            for(int i = 0; i < numeroDeLesmas; i++){
                if(velocidadeLesmas[i] > maior){
                    maior = velocidadeLesmas[i];
                }
            }
            if(maior < 10){
                cout << "1" << "\n";
            }
            else if(maior >= 10 && maior < 20){
                cout << "2" << "\n";
            }
            else{
                cout << "3" << "\n";
            }
        }

    return 0;
}