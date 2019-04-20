// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
    //Entrada
	float notaAlumno;

	cout << "Ingrese la nota del alumno: ";
	cin >> notaAlumno;

	//Logica
	if (notaAlumno >=1 && notaAlumno < 5) {
		cout << "Necesita estudiar" << endl;
	}
	else {
		if (notaAlumno >= 5 && notaAlumno < 13) {
			cout << "Jalado" << endl;
		}
		else {
			if (notaAlumno >= 13 && notaAlumno < 15) {
				cout << "Raspando" << endl;
			}
			else {
				if (notaAlumno >= 15 && notaAlumno < 20) {
					cout << "Sobresaliente" << endl;
				}
				else {
					cout << "Matricula de honor" << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}

