#include <string>
class Empleado
{
public:
	Empleado(std::string, std::string);
	~Empleado();
	std::string obtenerPrimerNombre();
	std::string obtenerApellidoPaterno();
	static unsigned int obtenerCuenta();
private:

	std::string primerNombre;
	std::string apellidoPaterno;
	static unsigned int cuenta;
};