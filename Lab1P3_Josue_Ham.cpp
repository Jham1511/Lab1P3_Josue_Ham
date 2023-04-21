

#include <iostream>
using namespace std;

int main()
{
	int opcion = 0;
	do
	{
		cout << "Bienvenido al menu del programa" << endl
			<< "1 -> Ejercicio 1 (Error Numerico)" << endl
			<< "2 -> Ejercicio 2 (Division en 2 Entradas)" << endl
			<< "3 -> Salir" << endl
			<< "Ingrese la opcion que desea: " << endl;
		cin >> opcion;
		switch (opcion) {
		case 1: {

		}
		break;

		case 2: {

		}
			  break;
		default:
			cout << "Saliendo del programa...";
		}
	} while (opcion!=3);
}