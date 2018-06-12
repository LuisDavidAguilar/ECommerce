#include "stdafx.h"
#include "Vendedor.h"


Vendedor::Vendedor()
{
	IdVendedor = "";
	NombreVendedor = "";
}

Vendedor::Vendedor(string _NombreVendedor) {
	Id++;
	NombreVendedor = _NombreVendedor;
	IdVendedor = to_string(Id);
}

Vendedor::~Vendedor()
{
}

string Vendedor::getId() {
	return IdVendedor;
}

string Vendedor::getNombre() {
	return NombreVendedor;
}