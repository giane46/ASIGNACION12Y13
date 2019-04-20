// ConsoleApplication67.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    //Entrada
	float a, b, c, valorx, raiz1, raiz2, resultado, discriminante;

	//Logica
    cout << " Ingrese el valor de A, B, C: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << " Ingrese el valor para evaluar en x: ";
    cin >> valorx;

    discriminante = b * b - 4 * a*c;

    if (discriminante < 0)
    {
        cout << " No existen raices reales ";
    }
    else {
        if (a == 0)
            if (b == 0)
                cout << " No existe ecuacion " << endl;
            else cout << " raiz " << -c / b << endl;
        else {
            raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << " La raiz 1 es :" << raiz1 << endl;
            cout << " La raiz 2 es : " << raiz2 << endl;
        }
    }

	//Salida
    resultado = a * valorx*valorx + b * valorx + c;
    cout << " resultado de la evaluacion  :" << resultado << endl;
    
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
