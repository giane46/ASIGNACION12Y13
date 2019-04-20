// ConsoleApplication56.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	char sexo;
	float edad;
	float pulsaciones;

	//Logica
	cout << "Ingrese el sexo: ";
	cin >> sexo;
	cout << "Ingrese la edad: ";
	cin >> edad;

	if (sexo == 'F') {
		pulsaciones = (220 - edad) / 10;
	}
	else {
		pulsaciones = (210 - edad) / 10;
	}

	//Salida
	cout.precision(2); cout << "El numero de pulsaciones debe ser " << pulsaciones << " por cada 10 segundos aproximadamente." << endl;

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
