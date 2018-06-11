#include "stdafx.h"
#include "MetodoPago.h"
#include <sstream>
#include <random>

using namespace std;

int MetodoPago::contadorMetodoPago;

#pragma region MetodosPrivados

string MetodoPago::GenerarCLABE()
{
	stringstream ss;
	random_device rd;
	default_random_engine eng(rd());
	uniform_int_distribution<> intervalo(0, 9);
	for (int i = 0; i < 7; ++i) {
		ss << intervalo(eng);
	}
	return ss.str();
}

#pragma endregion


#pragma region Constructores

MetodoPago::MetodoPago()
{
}

MetodoPago::MetodoPago(string cta)
{
	idMetodoPago = ++contadorMetodoPago;
	numCuenta = cta;
	CLABE = GenerarCLABE();
	CLABE.insert(6, numCuenta.substr(0, 11));
}


MetodoPago::~MetodoPago()
{
}

#pragma endregion 


#pragma region Propiedades

int MetodoPago::getIdMetodoPago() const
{
	return idMetodoPago;
}

const string & MetodoPago::getNumCuenta() const
{
	return numCuenta;
}

void MetodoPago::setNumCuenta(const string &new_num)
{
	numCuenta = new_num;
}

const string& MetodoPago::getCLABE() const
{
	return CLABE;
}

void MetodoPago::setCLABE(const string &new_CLABE)
{
	CLABE = new_CLABE;
}

#pragma endregion


#pragma region Metodos
#pragma endregion