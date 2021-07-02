#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include "EmpleadoPorComision.h"
using namespace std;
int main() {
	EmpleadoPorComision empleado("Fulano", "Comayagua", "0801-1990", 50000, 0.10);
	cout << fixed << setprecision(2);
	cout << "Informacion del empeleado utilizado los metodos obtener\n"
		<< "\nEl empleado: " << empleado.obtenerPrimerNombre() << " " << empleado.obtenerApellidoPaterno()
		<< "\nEl seguro social es: " << empleado.obtenerNumeroSeguroSocial()
		<< "\nLas ventas brutas son: " << empleado.obtenerVentasBrutas()
		<< "\nLa tarifa de comision es: " << empleado.obtenerTarifaComision() << endl;
	empleado.establecerVentasBrutas(100000);
	empleado.establecerTarifasComision(0.20);
	empleado.imprimir();
	cout << "\nEl pago del empleado es: " << empleado.calcularIngreso() << endl;
	system("pause");
	return 0;
}