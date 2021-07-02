#include <iostream>
#include "Empleado.h"
using namespace std;
int main() {
	cout << "El numero de empleado es: " << Empleado::obtenerCuenta() << endl;
	{
		Empleado e1("Sofia", "Maertinez");
		Empleado e2("Carlos", "Cruz");
		cout << "El numero de empleado es: " << Empleado::obtenerCuenta() << endl;
	}
	system("pause");
	return 0;
}