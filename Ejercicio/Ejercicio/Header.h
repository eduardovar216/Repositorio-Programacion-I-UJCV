#include <string>

class LibroCalificaciones {
public: 
	LibroCalificaciones();
	explicit LibroCalificaciones(std::string);
	void establecerNombreCurso(std::string);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
private:
	std::string NombreCurso;


};