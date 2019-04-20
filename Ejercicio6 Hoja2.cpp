// ConsoleApplication81.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int tipo;
	float consumo, totalPagar;

	//Logica
	cout << "Ingrese el tipo de consumo realizado(tipo1: comercial, tipo2: domestico): ";
	cin >> tipo;
	cout << "Ingrese el consumo en KWH: ";
	cin >> consumo;

	if (tipo == 1) {
		totalPagar = 1.58*consumo;
	}
	else {
		if (consumo < 100) {
			cout << "ERROR.";
		}
		else {
			if (consumo == 100) {
				totalPagar = 0.35 * 100;
			}
			else {
				if (consumo > 100 && consumo <= 500) {
					totalPagar = 0.35 * 100 + 1.05*(consumo - 100);
				}
				else {
					totalPagar = 0.35 * 100 + 1.05*(consumo - 100) + 1.36*(consumo - 500);
				}
			}
		}
	}

	//Salida
	cout << "La cantidad total a pagar por el consumo de luz es: " << totalPagar << endl;

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
