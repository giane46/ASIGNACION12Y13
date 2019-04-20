// ConsoleApplication73.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	char escalaPago;
	int numeroCursos;
	int importe;
	const int cuotaFija = 350;
	int cuotaVariable;

	//Logica
	cout << "Ingrese escala de pago: ";
	cin >> escalaPago;
	cout << "Ingrese el numero de cursos: ";
	cin >> numeroCursos;

	switch (escalaPago) {
	case 'A': if (numeroCursos >= 1 && numeroCursos <= 5) {
		cuotaVariable = 400;
	}
			  else {
		if (numeroCursos >= 6 && numeroCursos <= 8) {
			cuotaVariable = 600;
		}
		else {
			cuotaVariable = 900;
		}
	}
			  break;
	case 'B': if (numeroCursos >= 1 && numeroCursos <= 3) {
		cuotaVariable = 350;
	}
			  else {
		if (numeroCursos >= 4 && numeroCursos <= 7) {
			cuotaVariable = 500;
		}
		else {
			cuotaVariable = 700;
		}
	}
			  break;
	case'C': if (numeroCursos >= 1 && numeroCursos <= 3) {
		cuotaVariable = 320;
	}
			 else {
		if (numeroCursos > 3 && numeroCursos <= 7) {
			cuotaVariable = 480;
		}
		else {
			cuotaVariable = 685;
		}
	}
			 break;
	case 'D': if (numeroCursos >= 1 && numeroCursos <= 4) {
		cuotaVariable = 310;
	}
			  else {
		if (escalaPago = 'D', numeroCursos > 4 && numeroCursos >= 8) {
			cuotaVariable = 475;
		}
		else {
			cuotaVariable = 680;
		}
	}
			  break;
	default: cout << "Error." << endl;
		break;
	}

	importe = cuotaVariable + cuotaFija;

	//Salida
	cout << "El importe a cancelar es " << importe << endl;

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
