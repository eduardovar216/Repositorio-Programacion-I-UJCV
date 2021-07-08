#include <iostream>
class EmpleadoPorComision
{
public:
	EmpleadoPorComision(std::string, std::string, std::string, double = 0.0, double = 0.0);
	void establecerPrimerNombre(std::string);
	std::string obtenerPrimerNombre() const;
	void establecerApellidoPaterno(std::string);
	std::string obtenerApellidoPaterno() const;
	void establecerNumeroSeguroSocial(std::string);
	std::string obtenerNumeroSeguroSocial() const;
	void establecerVentasBrutas(double);
	double obtenerVentasBrutas() const;
	void establecerTarifasComision(double);
	double obtenerTarifaComision() const;
	//Metodos definidos por el desarollador
	double calcularIngreso() const;
	void imprimir() const;

private:
	std::string primerNombre;
	std::string apellidoPaterno;
	std::string numeroSeguroSocial;
	double ventasBrutas;
	double tarifasComision;
};
