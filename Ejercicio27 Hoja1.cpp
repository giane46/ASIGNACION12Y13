// ConsoleApplication72.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int ciclo, cursos;
	const float precioCurso = 155;
	float descuento, costo, costoFinal;

	//Logica
	cout << "Ingrese el ciclo que esta cursando el alumno: ";
	cin >> ciclo;
	cout << "Ingrese el numero de cursos: ";
	cin >> cursos;

	costo = precioCurso * cursos;

	if (ciclo >= 1 && ciclo <= 3) {
		descuento = 0.1*costo;
	}
	else {
		if (ciclo >= 4 && ciclo <= 6) {
			descuento = 0.15*costo;
		}
		else {
			if (ciclo >= 7 && ciclo <= 8) {
				descuento = 0.17*costo;
			}
			else {
				descuento = 0.18*costo;
			}
		}
	}

	costoFinal = costo - descuento;

	//Salida
	cout << "El costo es de: " << costoFinal << endl;

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
