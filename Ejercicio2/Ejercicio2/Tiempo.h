class Tiempo
{
public:
	Tiempo();
	explicit Tiempo(int = 0, int = 0, int = 0);
	void establecerTiempo(int, int, int);
	void establecerHora(int);
		void establecerMinuto(int);
	void establecerSegundo(int);

	unsigned int obtenerHora() const;
	unsigned int obtenerMinuto() const;
	unsigned int obtenerSegundo() const;
	void imprimirUniversal() const;
	void imprimirEstandar() const;
	
private:

	unsigned int hora;
	unsigned int minuto;
	unsigned int segundo;

};


