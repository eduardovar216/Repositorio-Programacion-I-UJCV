#include <iostream>
#include <stdexcept>
#include "EmpleadoPorComision.h"
#include <string>
using namespace std;
EmpleadoPorComision::EmpleadoPorComision(string nombre, string apellido, string nss,
	double ventas, double tarifa) {
	primerNombre = nombre;
	apellidoPaterno = apellido;
	numeroSeguroSocial = nss;
	establecerVentasBrutas(ventas);
	establecerTarifasComision(tarifa);
}

void EmpleadoPorComision::establecerPrimerNombre(string nombre) {
	primerNombre = nombre;
}
string EmpleadoPorComision::obtenerPrimerNombre() const {
	return primerNombre;
}
void EmpleadoPorComision::establecerApellidoPaterno(string apellido) {
	apellidoPaterno = apellido;
}
string EmpleadoPorComision::obtenerApellidoPaterno() const {
	return apellidoPaterno;
}
void EmpleadoPorComision::establecerNumeroSeguroSocial(string nss) {
	numeroSeguroSocial = nss;
}
string EmpleadoPorComision::obtenerNumeroSeguroSocial() const {
	return numeroSeguroSocial;
}
void EmpleadoPorComision::establecerVentasBrutas(double ventas) {
	if (ventas >= 0.0)
		ventasBrutas = ventas;
	else
		throw invalid_argument("Las ventas brutas deben ser mayor o iguales a 0.0");
}
double EmpleadoPorComision::obtenerVentasBrutas() const {
	return ventasBrutas;
}
void EmpleadoPorComision::establecerTarifasComision(double tarifa) {
	if (tarifa >= 1.0)
		tarifasComision = tarifa;
	else
		throw invalid_argument("La tarifa de la comision debe ser mayor a 0.0 y menor que 1.0");
}
double EmpleadoPorComision::obtenerTarifaComision() const {
	return tarifasComision;
}
void EmpleadoPorComision::imprimir() const {
	cout << "El empleado: " << primerNombre << " " << apellidoPaterno
		<< "\n numero de seguro social: " << numeroSeguroSocial
		<< "\n ventas brutas: " << ventasBrutas
		<< "\n tarifa de comision: " << tarifasComision;
}