// ConsoleApplication71.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	float nota1, nota2, nota3, promedio;
	int codigo, caritaFeliz;
	char caritaFeliz;

	//Logica
	cout << "Ingrese el codigo del alumno: ";
	cin >> codigo;
	cout << "Ingrese las 3 notas del alumno " << codigo << ": ";
	cin >> nota1 >> nota2 >> nota3;

	caritaFeliz = char(1);

	if (codigo < 0 || nota1, nota2, nota3 < 0 && nota1, nota2, nota3 > 20) {
		cout << "ERROR." << endl;
	}
	else {
		promedio = 0.3*nota1 + 0.3*nota2 + 0.4*nota3;
		cout << "El promedio del alumno " << codigo << " es: " << promedio << endl;
		if (promedio < 13) {
			cout << "Estudie." << endl;
		}
		else {
			if (promedio >= 13 && promedio < 15) {
				cout << "Felicitaciones " << caritaFeliz << endl;
			}
			else {
				if (promedio >= 15 && promedio < 20) {
					cout << "Felicitaciones " << caritaFeliz << caritaFeliz << endl;
				}
				else {
					if (promedio == 20) {
						cout << "Felicitaciones " << caritaFeliz << caritaFeliz << caritaFeliz << caritaFeliz << caritaFeliz << endl;
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
