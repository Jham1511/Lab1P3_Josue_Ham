

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
			cout << "Error Numerico" << endl;
			cout << "Ingrese el valor de N: ";
			int N;
			cin >> N;
			float X1 = 1/(float)N;
			double X2 = 1/(double)N;
			long double X3 = 1/(long double)N;

			float S1 =0;
			double S2 =0;
			long double S3 =0;

			

			for (int i = 0; i < N; i++){
				S1+= X1;
				S2+= X2;
				S3+= X3;
			}

			float E1 = 1.0-S1;
			double E2 = 1.0-S2;
			long double E3 = 1.0-S3;

			if (E1 <= 0){
				E1*-1;
			}
			else if (E2 < 0){
				E2*-1;
			}
			else if (E3 < 0) {
				E3*-1;
			}
			cout << "Usando Float: " << endl << "E: " << E1 << endl;
			cout << "Usando Double: " << endl << "E: " << E2 << endl;
			cout << "Usando Long Double: " << endl << "E: " << E3 << endl;
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
			for (int i = 0; i < P; i++) {
				if (P > 0 && B != 0) {
					M += A / B;
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