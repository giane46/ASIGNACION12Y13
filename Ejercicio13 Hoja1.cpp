// ConsoleApplication68.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int u, d, c, numero, nuevoNum;

	//Logica
	cout << "Ingrese un numero entero de 3 cifras: ";
	cin >> numero;

	if (numero > 99 && numero < 1000) {
		c = numero / 100;
		numero = numero % 100;
		d = numero / 10;
		numero = numero % 10;
		u = numero;

		nuevoNum = u * 100 + d * 10 + c;

		cout << nuevoNum << endl;
	}
	else {
		cout << "Numero incorrecto." << endl;
	}

	//Salida incluida en if, else

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
