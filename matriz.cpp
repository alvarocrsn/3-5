#include <iostream>

using namespace std;

int main(){

    int matriz [3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

int numero = 5;

bool encontrado = false;

    for(int  i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j] == numero){
                encontrado = true;
                cout << "El elemento " << numero << " fue encontrado";
                break;
            }
        }

    if (encontrado){
        break;
    }

    }
if (!encontrado){
    cout << "El elemento " << numero << " no fue encontrado";
}
return 0;
}
