// ConsoleApplication47.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int ambrosoli, ticTac, donofrio;
	float propina, montoTotal;

	//Logica
	cout << "Ingrese la cantidad de caramelo que va a comprar de tipo Ambrosoli: ";
	cin >> ambrosoli;
	cout << "Ingrese la cantidad de caramelo que va a comprar de tipo ticTac: ";
	cin >> ticTac;
	cout << "Ingrese la cantidad de caramelo que va a comprar de tipo Donofrio: ";
	cin >> donofrio;
	cout << "Ingrese el monto de la propina: ";
	cin >> propina;

	montoTotal = (ambrosoli*0.75) + (ticTac*1.15) + (donofrio*0.65);

	//Salida
	cout << "El monto total de la compra es: " << montoTotal << endl;

	if (montoTotal <= propina) {
		cout << "La propina es suficiente para pagar los caramelos." << endl;
	}
	else {
		cout << "La propina no es suficiente para pagar los caramelos." << endl;
	}

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
