#include "stdafx.h"
#include "Cliente.h"
#include <iostream>
int Cliente::ContadorIdCliente;

Cliente::Cliente()
{
	IdCliente = 0;
	NombreCliente = "";
	Direccion = "";
	Ciudad = "";
	Estado = "";
	Cp = "";
	Telefono = "";
}

Cliente::Cliente(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono) {
	ContadorIdCliente++;
	IdCliente = ContadorIdCliente;
	NombreCliente = _Nombre;
	Direccion = _Direccion;
	Ciudad = _Ciudad;
	Estado = _Edo;
	Cp = _Cp;
	Telefono = _Telefono;
}

Cliente::~Cliente()
{
}


#pragma region Geters
int Cliente::getId() {
	return IdCliente;
}

string Cliente::getNombre() {
	std::cout << NombreCliente;
	return NombreCliente;
}

string Cliente::getDireccion() {
	return Direccion;
}

string Cliente::getCiudad() {
	return Ciudad;
}

string Cliente::getEstado() {
	return Estado;
}

string Cliente::getCp() {
	return Cp;
}

string Cliente::getTelefono() {
	return Telefono;
}
#pragma endregion



#pragma region Seters
void Cliente::setNombre(string NewNombre) {
	NombreCliente = NewNombre;
}

void Cliente::setDireccion(string NewDireccion) {
	Direccion = NewDireccion;
}

void Cliente::setCiudad(string NewCiudad) {
	Ciudad = NewCiudad;
}

void Cliente::setEstado(string NewCiudad) {
	Ciudad = NewCiudad;
}

void Cliente::setCp(string NewCp) {
	Cp = NewCp;
}

void Cliente::setTelefono(string NewTelefono) {
	Telefono = NewTelefono;
}
#pragma endregion