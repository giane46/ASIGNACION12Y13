// ConsoleApplication62.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int cantidadKilowatts;
	int zona;
	int tarifaFija;
	float montoPagar;

	//Logica
	cout << "Ingrese el consumo: ";
	cin >> cantidadKilowatts;
	cout << "Ingrese la zona (1-2): ";
	cin >> zona;
	if (zona == 1) {
		tarifaFija = 50;
		montoPagar = tarifaFija + 0.75 * 100 + 0.9*(cantidadKilowatts - 100);
	}
	else {
		tarifaFija = 25;
		montoPagar = tarifaFija + 0.3 * 100 + 0.7*(cantidadKilowatts - 100);
	}

	//Salida
	cout << "El monto a pagar es: " << montoPagar << endl;

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
