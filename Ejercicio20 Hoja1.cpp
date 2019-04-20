// ConsoleApplication60.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int creditos;

	//Logica
	cout << "Ingrese la cantidad de creditos acumulados: ";
	cin >> creditos;

	if (creditos < 32) {
		cout << "El alumno se encuentra en PRIMER ANIO." << endl;
	}
	else {
		if (creditos >= 32 && creditos <= 63) {
			cout << "El alumno se encuentra en SEGUNDO ANIO." << endl;
		}
		else {
			if (creditos >= 64 && creditos <= 95) {
				cout << "El alumno se encuentra en TERCER ANIO." << endl;
			}
			else {
				cout << "El alumno se encuentra en CUARTO ANIO." << endl;
			}
		}
	}

	//Salida: incluida en logica
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
