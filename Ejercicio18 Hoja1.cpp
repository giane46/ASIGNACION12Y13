// ConsoleApplication59.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int posicion;

	//Logica
	cout << "Ingrese la posicion del equipo en la tabla: ";
	cin >> posicion;

	if (posicion <= 4) {
		cout << "El equipo seleccionado ira al mundial !!!" << endl;
	}
	else {
		if (posicion == 5) {
			cout << "El equipo ira a repechaje. Suerte!!!" << endl;
		}
		else {
			cout << "Comprate una TV LED para ver el mundial !!!" << endl;
		}
	}
	
	//Salida
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
