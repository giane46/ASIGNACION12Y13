// ConsoleApplication74.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	char modelo;
	int placa, mantenimiento;

	//Logica
	cout << "Ingrese el modelo: ";
	cin >> modelo;
	cout << "Ingrese el ultimo digito de la placa: ";
	cin >> placa;
	cout << "Ingrese el costo de mantenimiento anual: ";
	cin >> mantenimiento;

	switch (modelo) {
	case 'A':
		if (placa >= 0 && placa <= 5) {
			if (mantenimiento <= 500) {
				cout << "El mes de revision tecnica es: ENERO." << endl;
			}
			else {
				cout << "El mes de revision tecnica es: FEBRERO." << endl;
			}
		}
		else {
			if (placa >= 6 && placa <= 8) {
				if (mantenimiento <= 700) {
					cout << "El mes de revision tecnica es: JUNIO." << endl;
				}
				else {
					cout << "El mes de revision tecnica es: JULIO." << endl;
				}

				if (placa == 9) {
					if (mantenimiento <= 1000) {
						cout << "El mes de revision tecnica es: OCTUBRE." << endl;
					}
					else {
						cout << "El mes de revision tecnica es: NOVIEMBRE." << endl;
					}
				}
			}
		}
		break;
	case 'B':
		if (placa >= 1 && placa <= 3) {
			if (mantenimiento <= 500) {
				cout << "El mes de revision tecnica es: MARZO." << endl;
			}
			else {
				cout << "El mes de revision tecnica es: ABRIL." << endl;
			}
		}
		else {
			if (placa >= 4 && placa <= 8) {
				if (mantenimiento <= 700) {
					cout << "El mes de revision tecnica es: MAYO." << endl;
				}
				else {
					cout << "El mes de revision tecnica es: SETIEMBRE." << endl;
				}
				if (placa == 9 || placa == 0) {
					if (mantenimiento <= 1000) {
						cout << "El mes de revision tecnica es: AGOSTO." << endl;
					}
					else {
						cout << "El mes de revision tecnica es: DICIEMBRE." << endl;
					}
				}
			}
		}
		break;

	default: cout << "¡ERROR!";
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
