// ConsoleApplication53.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

float sueldoVentas(int numeroVentas) {
	const int sueldoBase = 900;
	float sueldo = (numeroVentas == 0)*sueldoBase + (numeroVentas >= 1 && numeroVentas <= 5)*(sueldoBase + 0.1*sueldoBase) + (numeroVentas > 5 && numeroVentas <= 10)*(sueldoBase + 0.15*sueldoBase) + (numeroVentas > 10)*(sueldoBase + 0.25*sueldoBase);
	
	return sueldo;
}

float incrementoTienda(char tienda, float sueldo) {
	float incremento = (tienda == 'M')*(0.02*sueldo) + (tienda == 'S')*(0.05*sueldo) + (tienda == 'L')*(0.1*sueldo) + (tienda == 'A')*(0.15*sueldo);

	return incremento;
}

int main()
{
	//Entrada
	const int sueldoBase = 900;
	float sueldo;
	int numeroVentas;
	char tienda;
	float incremento;
	float sueldoFinal;

	//Logica
	cout << "Ingrese el numero de ventas: ";
	cin >> numeroVentas;
	cout << "Ingrese codigo de la tienda: ";
	cin >> tienda;

	sueldo = sueldoVentas(numeroVentas);
	incremento = incrementoTienda(tienda, sueldo);

	sueldoFinal = sueldo + incremento;

	//Salida
	cout << "El sueldo correspondiente es: " << sueldoFinal << endl;

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
