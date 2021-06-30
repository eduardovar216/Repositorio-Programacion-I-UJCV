#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int Galleta, PanMolde, Panecillos, PastelGrande, CantidadG, CantidadPM, CantidadP, CantidadPG, TipoMem, SubT, Total;
	double membresiaA, membresiaB, membresiaC, Desc;
	membresiaA = 0.1;
	membresiaB = 0.15;
	membresiaC = 0.2;
	Galleta = 7;
	Panecillos = 3;
	PanMolde = 50;
	PastelGrande = 250;

	cout << "Bienvenido a la Panaderia Los 3 Hermanos" << endl;
	cout << "Tenemos grandes productos para que puedas deleitarte en casa" << endl;
	cout << "Indícame la cantidad de cada producto que deseas" << endl;
	cout << "Cuantas galletas deseas?" << endl;
	cin >> CantidadG;
	cout << "Cuantas barras de Pan Molde Quieres?" << endl;
	cin >> CantidadPM;
	cout << "Cuantos Panceillos quieres?" << endl;
	cin >> CantidadP;
	cout << "Cuantos Pasteles Grandes quieres?" << endl;
	cin >> CantidadPG;
	cout << "Que tipo de membresia posees? Escribe el numero, por favor. \n";
	cout << "1. Membresia A \\ 2. Membresia B \\ 3. Membresia C \\" << endl;
	cin >> TipoMem;
	SubT = (CantidadG * Galleta) + (CantidadPM * PanMolde) + (CantidadP * Panecillos) + (CantidadPG * PastelGrande);

	if (TipoMem == 1) {
		Desc = SubT * membresiaA;
		Total = SubT - Desc;
		cout << "Tu total a pagar es: " << Total << endl;
	}
	else if (TipoMem == 2) {
		Desc = SubT * membresiaB;
		Total = SubT - Desc;
		cout << "Tu total a pagar es: " << Total << endl;
	}
	else if (TipoMem == 3) {
		Desc = SubT * membresiaC;
		Total = SubT - Desc;
		cout << "Tu total a pagar es: " << Total << endl;
	}
	system("pause"); 
	return 0;

}
