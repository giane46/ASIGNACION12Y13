// ConsoleApplication76.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int menu;

	//Logica
	cout << "Ingrese una opcion del menu (1. Area Triangulo, 2. Area Rectangulo, 3. Area Circulo, 4. Area Cuadrado, 5. Salir): ";
	cin >> menu;

	switch (menu) {
		case 1:
			float baseTri, alturaTri, areaTri;
			cout << "Ingrese la base y altura del triangulo: ";
			cin >> baseTri >> alturaTri;
			areaTri = (baseTri*alturaTri) / 2;
			cout << "El area del triangulo es: " << areaTri << endl;
			break;
		case 2:
			float baseRect, alturaRect, areaRect;
			cout << "Ingrese la base y altura del rectangulo: ";
			cin >> baseRect >> alturaRect;
			areaRect = baseRect * alturaRect;
			cout << "El area del rectangulo es: " << areaRect << endl;
			break;
		case 3:
			double radio, areaCir;
			cout << "Ingrese el radio del circulo: ";
			cin >> radio;
			areaCir = 3.14*radio*radio;
			cout << "El area del circulo es: " << areaCir << endl;
			break;
		case 4:
			float lado, areaCuad;
			cout << "Ingrese el lado del cuadrado: ";
			cin >> lado;
			areaCuad = lado * lado;
			cout << "El area del cuadrado es: " << areaCuad << endl;
			break;
		case 5:
			break;
		default: cout << "ERROR." << endl;
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
