#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Definici�n de la estructura Empleado
struct Empleado {
 string nombre;
 int identificacion;
 double salario;
};
int main() {
 int N;
 cout << "Ingrese el numero de empleados: ";
 cin >> N;
 // Crear un vector de empleados
 vector<Empleado> empleados(N);
 // Ingresar los datos de los empleados
 for (int i = 0; i < N; ++i) {
 cout << "Ingrese los datos del empleado " << i + 1 << ":" << endl;
 cout << "Nombre: ";
 cin.ignore();
 getline(cin, empleados[i].nombre);
 cout << "Identificacion: ";
 cin >> empleados[i].identificacion;
 cout << "Salario: ";
 cin >> empleados[i].salario;
 }
 // Encontrar el empleado con el salario m�s alto
 Empleado empleadoSalarioAlto = empleados[0];
 for (int i = 1; i < N; ++i) {
 if (empleados[i].salario > empleadoSalarioAlto.salario) {
 empleadoSalarioAlto = empleados[i];
 }
 }
 // Encontrar el empleado con el salario m�s bajo
 Empleado empleadoSalarioBajo = empleados[0];
 for (int i = 1; i < N; ++i) {
 if (empleados[i].salario < empleadoSalarioBajo.salario) {
 empleadoSalarioBajo = empleados[i];
 }
 }
 // Buscar un empleado por su identificaci�n
 int idBusqueda;
 cout << "Ingrese la identificaci�n del empleado a buscar: ";
 cin >> idBusqueda;
 Empleado empleadoEncontrado;
 bool empleadoEncontradoFlag = false;
 for (int i = 0; i < N; ++i) {
 if (empleados[i].identificacion == idBusqueda) {
 empleadoEncontrado = empleados[i];
 empleadoEncontradoFlag = true;
 break;
 }
 }
 // Mostrar resultados
 cout << "Empleado con el salario m�s alto:" << endl;
 cout << "Nombre: " << empleadoSalarioAlto.nombre << endl;
 cout << "Identificaci�n: " << empleadoSalarioAlto.identificacion << endl;
 cout << "Salario: " << empleadoSalarioAlto.salario << endl;
 cout << "Empleado con el salario m�s bajo:" << endl;
 cout << "Nombre: " << empleadoSalarioBajo.nombre << endl;
 cout << "Identificaci�n: " << empleadoSalarioBajo.identificacion << endl;
 cout << "Salario: " << empleadoSalarioBajo.salario << endl;
 if (empleadoEncontradoFlag) {
 cout << "Empleado encontrado:" << endl;
 cout << "Nombre: " << empleadoEncontrado.nombre << endl;
 cout << "Identificaci�n: " << empleadoEncontrado.identificacion << endl;
 cout << "Salario: " << empleadoEncontrado.salario << endl;
 } else {
 cout << "Empleado con identificaci�n " << idBusqueda << " no encontrado." << endl;
 }
 return 0;
}
