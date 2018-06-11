#include "stdafx.h"
#include "Contrato.h"

using namespace std;

#pragma region MetodosPrivados
#pragma endregion


#pragma region Constructores

Contrato::Contrato()
{
}

Contrato::Contrato(const string &cuenta, double credito, const string &fecha, unsigned int unidades) : MetodoPago(cuenta), creditoContrato(credito), fechaPago(fecha), unidadesPrestamo(unidades)
{
}


Contrato::~Contrato()
{
}

#pragma endregion


#pragma region Propiedades

double Contrato::getCreditoContrato() const
{
	return creditoContrato;
}

void Contrato::setCreditoContrato(double credito)
{
	creditoContrato = credito;
}

const string& Contrato::getFechaPago() const
{
	return fechaPago;
}

void Contrato::setFechaPago(const string & fecha)
{
	fechaPago = fecha;
}

unsigned int Contrato::getUnidadesPrestamos() const
{
	return unidadesPrestamo;
}

void Contrato::setUnidadesPrestamo(unsigned int unidades)
{
	unidadesPrestamo = unidades;
}

#pragma endregion


#pragma region Metodos



#pragma endregion