#include <iostream>

using namespace std;

int main(){

    ///como se constituye una matriz

    int filas, columnas;
    cout << "Ingrese el numero de filas ";
    cin >> filas;
    cout << "Ingrese el numero de columnas ";
    cin >> columnas;

    /// definir la matriz con los valores que captamos

    int matriz [filas][columnas];

    /// rellenar la matriz

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingrese el valor para la posicion " << i << j << endl;
            cin >> matriz [i][j];
        }

        cout << "La matriz ingresada es: " << endl;
        for (int i = 0; i < filas; i++){
                for(int j = 0; j < columnas; j++){
                    cout << matriz [i][j] << " ";
                }
             cout << endl;
        }
    }


return 0;
}
