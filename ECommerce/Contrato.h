#pragma once
#include "MetodoPago.h"
class Contrato :
	public MetodoPago
{
private:
	double creditoContrato;
	std::string fechaPago;
	unsigned int unidadesPrestamo;

public:
#pragma region Constructores

	Contrato();
	Contrato(const std::string&, double, const std::string&, unsigned int);
	virtual ~Contrato();

#pragma endregion


#pragma region Propiedades

	double getCreditoContrato() const;
	void setCreditoContrato(double credito);

	const std::string& getFechaPago() const;
	void setFechaPago(const std::string &fecha);

	unsigned int getUnidadesPrestamos() const;
	void setUnidadesPrestamo(unsigned int unidades);

#pragma endregion


#pragma region Metodos
#pragma endregion
};

