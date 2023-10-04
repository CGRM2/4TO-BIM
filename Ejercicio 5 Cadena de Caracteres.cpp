#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	string cadena;
	
	cout << "INGRESE UNA CADENA DE CARACTERES: ";
	cin >>cadena;
	
	if (cadena.length()>10){
		cout << "LA CADENA INGRESADA ES: " << cadena << endl;
		
	} else {
		cout << "LA CADENA NO SUPERA LOS 10 CARACTERES." << endl;
	}
	

	
	return 0;
	getch();
}
