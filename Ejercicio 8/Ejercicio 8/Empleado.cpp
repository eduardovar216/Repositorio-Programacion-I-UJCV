#include <iostream>
#include "Empleado.h"
using namespace std;
unsigned int Empleado::cuenta = 0;
unsigned int Empleado::obtenerCuenta() {
	return cuenta;
}
Empleado::Empleado(string nombre, string apellido)
	:primerNombre(nombre), apellidoPaterno(apellido) {
		++cuenta;
		cout << "Se llama al constructor" << endl;
	}

Empleado::~Empleado() {
	cout << "Se llama al destructor" << endl;
	--cuenta;
}
string Empleado::obtenerPrimerNombre() const {
	return primerNombre;
}
string Empleado::obtenerApellidoPaterno() const {
	return apellidoPaterno;
}

