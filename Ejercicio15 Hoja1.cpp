// ConsoleApplication70.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int numero3, numero2, numero1, u, d, c;

	//Logica
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero3;

	c = numero3 / 100;
	numero2 = numero3 % 100;
	d = numero2 / 10;
	numero1 = numero2 % 10;
	u = numero1;

	
	if (numero3 >= 1 && numero3 < 101) {
		if (c == 0 && d == 0) {
			cout << "El numero tiene 1 digito" << endl;
		}
		else {
			if (c == 0) {
				cout << "El numero tiene 2 digitos" << endl;
			}
			else {
				cout << "El numero tiene 3 digitos" << endl;
			}
		}
	}
	else {
		cout << "Numero incorrecto." << endl;
	}

	//Salida incluida en Logica

	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
