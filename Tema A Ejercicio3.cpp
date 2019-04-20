// ConsoleApplication38.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

double importeTicket(char aerolinea, char dia) {
	double precio = ((aerolinea == 'L')*((dia == 'Lu', 'Ma', 'Mi', 'J')*70.4 + (dia == 'Vi' || dia == 'S')*100.8 + (dia == 'D')*90.1)) + ((aerolinea == 'V')*((dia == 'Lu', 'Ma', 'Mi', 'J')*20.4 + (dia == 'Vi', 'S')*70.6 + (dia == 'D')*80.3));

	return precio;
}

double incrementoPrecio(int maletas, double precio) {
	double incremento = (maletas == '0')*(0 * precio) + (maletas >= 1 && maletas <= 2)*(0.15*precio) + (maletas > 2)*(0.3*precio);

	return incremento;
}

int main()
{
    //Entrada
	char aerolinea;
	char dia;
	int maletas;
	double incremento;
	double precio;
	double precioFinal;

	//Logica
	cout << "Ingrese la aerolinea(L: Latam, V: Viva): ";
	cin >> aerolinea;

	cout << "Ingrese el dia: ";
	cin >> dia;

	cout << "Ingrese el numero de maletas: ";
	cin >> maletas;

	precio = importeTicket(aerolinea, dia);
	incremento = incrementoPrecio(maletas, precio);

	precioFinal = precio + (incremento*precio);

	//Salida
	cout << "Precio del ticket: " << precioFinal << endl;

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
