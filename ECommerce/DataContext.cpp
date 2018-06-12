#include "stdafx.h"
#include "DataContext.h"


DataContext::DataContext()
{
	Tarjetas = vector<TarjetaCredito>();
	Contratos = vector<Contrato>();
}


DataContext::~DataContext()
{
	Tarjetas.clear();
	Contratos.clear();
}


#pragma region Propiedades

vector<TarjetaCredito>& DataContext::getTarjetas()
{
	return Tarjetas;
}

vector<Contrato>& DataContext::getContratos()
{
	return Contratos;
}

#pragma endregion

#pragma region Metodos
#pragma endregion
