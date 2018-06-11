#include "stdafx.h"
#include "TarjetaCredito.h"
#include "Utilidades.h"
#include <vector>

using namespace std;

#pragma region MetodosPrivados
#pragma endregion

#pragma region Constructores

TarjetaCredito::TarjetaCredito()
{
}

TarjetaCredito::TarjetaCredito(std::string cuenta, string tarjeta, string fecha, string cvv) : MetodoPago(cuenta), numTarjeta(tarjeta), fechaVencimiento(fecha), CVV(cvv)
{
}


TarjetaCredito::~TarjetaCredito()
{
}

#pragma endregion


#pragma region Propiedades

const string& TarjetaCredito::getNumTarjeta() const
{
	return numTarjeta;
}

void TarjetaCredito::setNumTarjeta(const string &tarjeta)
{
	numTarjeta = tarjeta;
}

const string& TarjetaCredito::getFechaVencimiento() const
{
	return fechaVencimiento;
}

void TarjetaCredito::setFechaVencimiento(const string &fecha)
{
	fechaVencimiento = fecha;
}

const string & TarjetaCredito::getCVV() const
{
	return CVV;
}

void TarjetaCredito::setCVV(const string &cvv)
{
	CVV = cvv;
}

#pragma endregion


#pragma region Metodos
bool TarjetaCredito::ValidarFechaTarjeta()
{
	bool validation;
	time_t time_create = time(NULL);
	struct tm ltm;
	localtime_s(&ltm, &time_create);
	stringArray partesFecha = Split(this->fechaVencimiento, '/');

	if (stoi(partesFecha.at(1)) > (1900 + ltm.tm_year))
	{
		validation = true;
	}
	else {
		if (stoi(partesFecha.at(0)) > (1 + ltm.tm_mon))
		{
			validation = true;
		}
		else {
			validation = false;
		}
	}

	return validation;
}

#pragma endregion