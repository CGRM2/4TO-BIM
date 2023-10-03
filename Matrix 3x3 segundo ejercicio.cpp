#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];

    // Solicitar al usuario que ingrese los elementos de la matriz
    cout << "Ingrese los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento en la fila " << i+1 << " y columna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar la diagonal principal
    cout << "La diagonal principal de la matriz es:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}

