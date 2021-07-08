#include<iostream>
#include "Tiempo.h"
#include <stdexcept>
using namespace std;
int main() {
	Tiempo t1(0);
	Tiempo t2(2);
	Tiempo t3(21, 34);
	Tiempo t4(12, 25, 42);
	cout << "Objeto t1\n";
	cout << "\n";
	t1.imprimirEstandar();
	cout << "\n";
	t1.imprimirUniversal();
	cout << "\n";
	cout << "Objeto t2\n";
	cout << "\n";
	t2.imprimirEstandar();
	cout << "\n";
	t2.imprimirUniversal();
	cout << "\n";
	cout << "Objeto t3\n";
	cout << "\n";
	t3.imprimirUniversal();
	cout << "\n";
	t3.imprimirEstandar();
	cout << "\n";
	cout << "Objeto t4\n";
	cout << "\n";
	t4.imprimirEstandar();
	cout << "\n";
    t4.imprimirEstandar();
	cout << "\n";
	try
	{
		Tiempo t5(27, 74, 99);
	}

	catch (invalid_argument& e)
	{
		cerr << "Excepcion" << e.what() << endl;
	}

	system("pause");
}