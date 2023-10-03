#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ancho;

    // Solicitar al usuario el tamaño del vector
    cout << "Ingrese el ancho del vector: ";
    cin >> ancho;

    // Crear un vector de enteros con el tamaño proporcionado
    vector<int> numeros(ancho);

    // Leer valores para el vector desde el usuario
    for (int i = 0; i < ancho; ++i) {
        cout << "Ingrese el valor para la posicion " << i << ": ";
        cin >> numeros[i];
    }

    // Mostrar el vector original
    cout << "Vector original:" << endl;
    for (int i = 0; i < ancho; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Mostrar el vector en orden inverso
    cout << "Vector en orden inverso:" << endl;
    for (int i = ancho - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
