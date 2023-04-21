

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
			cout << "Error Numerico";
			
		}
		break;

		case 2: {
			cout << "Division en 2 Entradas" << endl
			<< "Ingrese la cantidad de iteraciones (Variable P): ";
			int P;
			cin >> P;
			cout << "Ingrese A: ";
			int A;
			cin >> A;
			cout << "Ingrese B: ";
			int B;
			cin >> B;

			int M = 0;
			if (P > 0 && B!=0){
				for (int i = 0; i < P; i++){
					M+= A/B;
					B--;
				}
			}

			cout << "Valor de M: " << M << endl;
		}
			  break;
		default:
			cout << "Saliendo del programa...";
		}
	} while (opcion!=3);
}