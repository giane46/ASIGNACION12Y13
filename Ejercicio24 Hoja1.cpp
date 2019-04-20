// ConsoleApplication64.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int numCompu;
	float costo;
	float descuento;
	const int precio = 760;
	float costoFinal;

	//Logica
	cout << "Ingrese el numero de computadoras a comprar: ";
	cin >> numCompu;

	costo = precio * numCompu;

	if (numCompu < 5) {
		descuento = 0.1*costo;
	}
	else {
		if (numCompu >= 5 && numCompu < 10) {
			descuento = 0.2*costo;
		}
		else {
			descuento = 0.4*costo;
		}
	}

	costoFinal = costo - descuento;

	//Salida
	cout << "El costo es de $" << costo << " y el total aplicando el descuento de $" << descuento << " es de $" << costoFinal << endl;

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
