#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	LibroCalificaciones Libro1("IIF2012 PROGRAMACION I");
		LibroCalificaciones Libro2("IIF3022 POROGRAMACION II");
		LibroCalificaciones Libro3;
		Libro3.establecerNombreCurso("II4033 Programacion Apps");
		cout << "El libro 1 es: " << Libro1.obtenerNombreCurso() << "\n"
			<< "El libro 2 es: " << Libro2.obtenerNombreCurso() <<"\n"
			<< "El libre 3 es: " << Libro3.obtenerNombreCurso() << endl;
		Libro1.establecerNombreCurso("IIF4032 Fundamentos de Programacion");
		cout << "El libro 1 es: " << Libro1.obtenerNombreCurso() << "\n"
			<< "El libro 2 es: " << Libro2.obtenerNombreCurso() << endl;
		system("pause");



}