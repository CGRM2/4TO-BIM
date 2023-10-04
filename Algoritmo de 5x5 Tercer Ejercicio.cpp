#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    const int filas = 5;
    const int columnas = 5;
    int matriz[filas][columnas];

    // Llenar la matriz
    cout << "Ingrese los elementos de la matriz 5x5:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento en la fila " << i + 1 << " y columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    int sumaMaxima = -1;  // Inicializar con un valor mínimo para asegurar que se actualice
    int filaMaxima = -1;
    int ceros = 0;
    int positivos = 0;
    int negativos = 0;

    // Calcular la suma de cada fila y contar ceros, positivos y negativos
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j];
            if (matriz[i][j] == 0) {
                ceros++;
            } else if (matriz[i][j] > 0) {
                positivos++;
            } else {
                negativos++;
            }
        }

        // Verificar si esta fila tiene la suma máxima
        if (sumaFila > sumaMaxima) {
            sumaMaxima = sumaFila;
            filaMaxima = i;
        }
    }

    // Mostrar la fila con la suma máxima y su suma
    cout << "La fila con la máxima suma es la fila " << filaMaxima + 1 << " con suma " << sumaMaxima << endl;

    // Mostrar el recuento de ceros, positivos y negativos
    cout << "Numero de ceros: " << ceros << endl;
    cout << "Numero de positivos: " << positivos << endl;
    cout << "Numero de negativos: " << negativos << endl;
    
    getch();

    return 0;
}

