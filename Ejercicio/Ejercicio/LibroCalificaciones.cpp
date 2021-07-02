#include <iostream>
#include "Header.h"
using namespace std;

LibroCalificaciones::LibroCalificaciones() {}
LibroCalificaciones::LibroCalificaciones(string Nombre) {
	establecerNombreCurso(Nombre);
}

void LibroCalificaciones::establecerNombreCurso(string Nombre) {


	if (Nombre.size() <= 25);
	{
		NombreCurso = Nombre;
	}
	if (Nombre.size() > 25) {
		NombreCurso = Nombre.substr(0, 25);
		cerr << " El nombre " << Nombre << " Excede la longitud maxima de 25\n"
			"Se tomaron los primeros 25 caracteres" << endl;

	}

}

string LibroCalificaciones::obtenerNombreCurso() const {
	return NombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al curso" << obtenerNombreCurso() << endl;
}