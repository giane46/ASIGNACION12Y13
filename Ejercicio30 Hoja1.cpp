// ConsoleApplication83.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int dia, mes, anio;

	//Logica
	cout << "Ingrese su dia, mes y anio de nacimiento: ";
	cin >> dia >> mes >> anio;

	if (anio > 0) {
		if (anio % 2 == 0) {
			if (dia % 2 == 0) {
				switch (mes) {
				case 1:case 2: case 3: {
					cout << "Tu color es: ROJO." << endl;
					break;
				}
				case 4: case 5: case 6: {
					cout << "Tu color es: NARANJA." << endl;
					break;
				}
				case 7: case 8: case 9: {
					cout << "Tu color es: MARRON." << endl;
					break;
				}
				case 10: case 11: case 12: {
					cout << "Tu color es: VIOLETA." << endl;
					break;
				}
				default: cout << "Ingrese un mes valido." << endl;
				}
			}
			else {
				switch (mes) {
				case 1:case 2: case 3: {
					cout << "Tu color es: CELESTE." << endl;
					break;
				}
				case 4: case 5: case 6: {
					cout << "Tu color es: VERDE." << endl;
					break;
				}
				case 7: case 8: case 9: {
					cout << "Tu color es: FUCSIA." << endl;
					break;
				}
				case 10: case 11: case 12: {
					cout << "Tu color es: ROSADO." << endl;
					break;
				}
				default: cout << "Ingrese un mes valido." << endl;
				}
			}
		}
		else {
			if (dia % 2 == 0) {
				switch (mes) {
				case 1:case 2: case 3: {
					cout << "Tu color es: MORADO." << endl;
					break;
				}
				case 4: case 5: case 6: {
					cout << "Tu color es: TURQUESA." << endl;
					break;
				}
				case 7: case 8: case 9: {
					cout << "Tu color es: AZUL." << endl;
					break;
				}
				case 10: case 11: case 12: {
					cout << "Tu color es: OLIVO." << endl;
					break;
				}
				default: cout << "Ingrese un mes valido." << endl;
				}
			}
			else {
				switch (mes) {
				case 1:case 2: case 3: {
					cout << "Tu color es: NEGRO." << endl;
					break;
				}
				case 4: case 5: case 6: {
					cout << "Tu color es: GRIS." << endl;
					break;
				}
				case 7: case 8: case 9: {
					cout << "Tu color es: AMARILLO." << endl;
					break;
				}
				case 10: case 11: case 12: {
					cout << "Tu color es: BLANCO." << endl;
					break;
				}
				default: cout << "Ingrese un mes valido." << endl;
				}
			}
		}
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
