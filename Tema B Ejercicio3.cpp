// ConsoleApplication54.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

float precioSegun(char vista, char dia) {
	float precio;
	if (vista == 'M') {
		precio = (dia == 'L')*20.4 + (dia == 'V')*80.8 + (dia == 'D')*70.1;
	}
	else {
		if (vista == 'I') {
			precio = (dia == 'L')*15.7 + (dia == 'V')*60.7 + (dia == 'D')*65.8;
		}
	}

	return precio;
}

float incrementoCamas(int camas, float precio) {
	float incremento = (camas == 1) * 0 + (camas >= 2 && camas <= 3)*(0.12*precio) + (camas > 3)*(0.25*precio);

	return incremento;
}

int main()
{
	//Entrada
	char vista, dia;
	int camas;
	float precio, incremento, precioTicket;

	//Logica
	cout << "Ingrese la vista (M: Mar, I: Interior): ";
	cin >> vista;
	cout << "Ingrese el dia de ingreso (L: Lunes-Jueves, V: Viernes-Sabado, D: Domingo): ";
	cin >> dia;
	cout << "Ingrese cantidad de camas: ";
	cin >> camas;

	precio = precioSegun(vista, dia);
	incremento = incrementoCamas(camas, precio);

	precioTicket = precio + incremento;

	//Salida
	cout << "Precio del ticket: " << precioTicket << endl;

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
