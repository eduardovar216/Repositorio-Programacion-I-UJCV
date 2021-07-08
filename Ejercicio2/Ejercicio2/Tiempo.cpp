#include <iostream>
#include <stdexcept>
#include "Tiempo.h"
#include <iomanip>

using namespace std;

Tiempo::Tiempo(){}
Tiempo::Tiempo(int Hora, int Minuto, int Segundo) {
	establecerTiempo(Hora, Minuto, Segundo);
}

void Tiempo::establecerTiempo(int h, int m, int s) {
	establecerHora(h);
	establecerMinuto(m);
	establecerSegundo(s);
}

void Tiempo::establecerHora(int h) {
	if (h >= 0 && h < 24)
		hora = h;
	else
		throw invalid_argument("La hora debe estar entre 0 y 23");
}
void Tiempo::establecerMinuto(int m) {
	if (m >= 0 && m < 60)
		minuto = m;
	else
		throw invalid_argument("Los minutos deben estar entre 0 y 60");
}

void Tiempo::establecerSegundo(int s) {
	if (s >= 0 && s < 60)
		segundo = s;
	else
		throw invalid_argument("Los segundos deben estar entre 0 y 60");
}

unsigned int Tiempo::obtenerHora() const {
	return hora;
}

unsigned int Tiempo::obtenerMinuto() const {
	return minuto;
}
unsigned int Tiempo::obtenerSegundo() const {
	return segundo;
}

void Tiempo::imprimirUniversal() const {
	cout << setfill('0') << setw(2) << obtenerHora() << ":"
		<< setw(2) << obtenerMinuto() << ":"
		<< setw(2) << obtenerSegundo();
}

void Tiempo::imprimirEstandar() const {
	cout << ((obtenerHora() == 0 || obtenerHora() == 12) ? 12 : obtenerHora() % 12) << ":"
		<< setfill('0') << setw(2) << obtenerMinuto() << ":"
		<< setw(2) << obtenerSegundo() << (hora < 12 ? " AM" : " PM");
}