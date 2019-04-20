// ConsoleApplication37.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Entrada
	string cuc;
	string anioAlta, mesAlta, diaAlta, regionCuc, tamanioEmpresa;
	bool cucLima, empresaGrande;

	//Logica
	cout << "Ingrese el Codigo Unico del Contribuyente: ";
	cin >> cuc;

	anioAlta = cuc.substr(0, 4);
	mesAlta = cuc.substr(4, 2);
	diaAlta = cuc.substr(6, 2);
	regionCuc = cuc.substr(8, 3);
	tamanioEmpresa = cuc.substr(11, 1);

	cucLima = (regionCuc == 'LIM';
	empresaGrande = (tamanioEmpresa == 'G');

	//Salida
	cout << "Día de alta: " << diaAlta << endl;
	cout << "Mes de alta: " << mesAlta << endl;
	cout << "Anio de alta : " << anioAlta << endl;
	cout << "Empresa de Lima(0: No; 1; Si) : " << cucLima << endl;
	cout << "Empresa grande(0: No; 1; Si) : " << empresaGrande << endl;

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
