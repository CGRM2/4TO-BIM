#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int numAlumnos = 5;
    const int numCalificaciones = 7;

    // Matriz para almacenar las calificaciones de los alumnos
    double calificaciones[numAlumnos][numCalificaciones];

    // Matriz para almacenar los promedios de los alumnos
    double promedios[numAlumnos];

    // Solicitar al usuario que ingrese las calificaciones
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Ingrese las 7 calificaciones para el alumno " << i + 1 << ":" << endl;
        for (int j = 0; j < numCalificaciones; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> calificaciones[i][j];
        }
    }

    // Calcular los promedios de los alumnos y mostrar los mensajes correspondientes
    cout << "Promedios y mensajes correspondientes:" << endl;
    for (int i = 0; i < numAlumnos; i++) {
        double suma = 0;
        for (int j = 0; j < numCalificaciones; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / numCalificaciones;

        cout << "Alumno " << i + 1 << ": Promedio = " << fixed << setprecision(2) << promedios[i] << " - ";

        if (promedios[i] == 100) {
            cout << "Excelente!" << endl;
        } else if (promedios[i] >= 90 && promedios[i] <= 99) {
            cout << "Muy bien" << endl;
        } else if (promedios[i] >= 80 && promedios[i] <= 89) {
            cout << "Bien" << endl;
        } else if (promedios[i] >= 70 && promedios[i] <= 79) {
            cout << "Hay que mejorar" << endl;
        } else {
            cout << "Reprobado" << endl;
        }
    }

    return 0;
}

