#include <iostream>
#include <string>

using namespace std;

int main() {
    // Arreglo de nombres
    string nombres[] = {"Juan", "María", "Carlos", "Ana", "Luis"};

    // Tamaño del arreglo de nombres
    int numNombres = sizeof(nombres) / sizeof(nombres[0]);

    // Pedir al usuario que ingrese un nombre a buscar
    cout << "Ingrese un nombre a buscar: ";
    string nombreBuscado;
    cin >> nombreBuscado;

    // Buscar el nombre en la lista
    bool encontrado = false;
    int posicion = -1;

    for (int i = 0; i < numNombres; i++) {
        if (nombres[i] == nombreBuscado) {
            encontrado = true;
            posicion = i;
            break;  // Terminar el bucle si se encuentra el nombre
        }
    }

    // Mostrar el resultado
    if (encontrado) {
        cout << "El nombre '" << nombreBuscado << "' se encuentra en la posición " << posicion << "." << endl;
    } else {
        cout << "El nombre '" << nombreBuscado << "' no se encontró en la lista." << endl;
    }

    return 0;
}

