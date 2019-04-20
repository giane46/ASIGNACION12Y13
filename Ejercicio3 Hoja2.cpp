// ConsoleApplication82.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int dia, mes;

	//Logica
	cout << "Ingrese dia y mes de nacimiento: ";
	cin >> dia >> mes;

	if (((dia >= 22 && dia <= 31) && mes == 12) || ((dia >= 1 && dia <= 20) && mes == 1)) {
		cout << "Su signo zodiacal es Capricornio." << endl;
	}
	else {
		if (((dia >= 21 && dia <= 31) && mes == 1) || ((dia >= 1 && dia <= 19) && mes == 2)) {
			cout << "Su signo zodiacal es Acuario." << endl;
		}
		else {
			if (((dia >= 20 && dia <= 29) && mes == 2) || ((dia >= 1 && dia <= 20) && mes == 3)) {
				cout << "Su signo zodiacal es Piscis." << endl;
			}
			else {
				if (((dia >= 21 && dia <= 31) && mes == 3) || ((dia >= 1 && dia <= 20) && mes == 4)) {
					cout << "Su signo zodiacal es Aries." << endl;
				}
				else {
					if (((dia >= 21 && dia <= 30) && mes == 4) || ((dia >= 1 && dia <= 21) && mes == 5)) {
						cout << "Su signo zodiacal es Tauro." << endl;
					}
					else {
						if (((dia >= 22 && dia <= 31) && mes == 5) || ((dia >= 1 && dia <= 21) && mes == 6)) {
							cout << "Su signo zodiacal es Geminis." << endl;
						}
						else {
							if (((dia >= 22 && dia <= 30) && mes == 6) || ((dia >= 1 && dia <= 23) && mes == 7)) {
								cout << "Su signo zodiacal es Cancer." << endl;
							}
							else {
								if (((dia >= 24 && dia <= 31) && mes == 7) || ((dia >= 1 && dia <= 23) && mes == 8)) {
									cout << "Su signo zodiacal es Leo." << endl;
								}
								else {
									if (((dia >= 24 && dia <= 31) && mes == 8) || ((dia >= 1 && dia <= 23) && mes == 9)) {
										cout << "Su signo zodiacal es Virgo." << endl;
									}
									else {
										if (((dia >= 24 && dia <= 30) && mes == 9) || ((dia >= 1 && dia <= 23) && mes == 10)) {
											cout << "Su signo zodiacal es Libra." << endl;
										}
										else {
											if (((dia >= 24 && dia <= 31) && mes == 10 || ((dia >= 1 && dia <= 22) && mes == 11))) {
												cout << "Su signo zodiacal es Escorpio." << endl;
											}
											else {
												cout << "Su signo zodiacal es Sagitario." << endl;
											}
										}
									}
								}
							}
						}
					}
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
