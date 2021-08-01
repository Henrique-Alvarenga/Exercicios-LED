#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    char sentenca[50];
    bool cont = true;


    while(cin.getline(sentenca, 50)){
        cont = true;
        for(int i = 0; i < 50; i++){
            if(sentenca[i] == NULL){
                break;
            }
            if(cont == true){
                if(sentenca[i] == ' '){
                    cout << sentenca[i];
                }
                else if(sentenca[i] >= 'a' && sentenca[i] <= 'z'){
                    sentenca[i] -= 32;
                    cout << sentenca[i];
                    cont = false;
                }
                else{
                    cout << sentenca[i];
                    cont = false;
                }
            }
            else{
                if(sentenca[i] == ' '){
                    cout << sentenca[i];
                }
                else if(sentenca[i] >= 'A' && sentenca[i] <= 'Z'){
                    sentenca[i] += 32;
                    cout << sentenca[i];
                    cont = true;
                }
                else{
                    cout << sentenca[i];
                    cont = true;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}