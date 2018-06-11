#pragma once
#include "MetodoPago.h"
class TarjetaCredito :
	public MetodoPago
{

private:

#pragma region Atributos
	std::string numTarjeta;
	std::string fechaVencimiento;
	std::string CVV;
#pragma endregion

public:

#pragma region Constructores
	TarjetaCredito();
	TarjetaCredito(std::string, std::string, std::string, std::string);
	virtual ~TarjetaCredito();
#pragma endregion


#pragma region Propiedades

	const std::string &getNumTarjeta() const;
	void setNumTarjeta(const std::string&);

	const std::string &getFechaVencimiento() const;
	void setFechaVencimiento(const std::string&);

	const std::string &getCVV() const;
	void setCVV(const std::string&);


#pragma endregion


#pragma region Metodos
	bool ValidarFechaTarjeta();
#pragma endregion
};

