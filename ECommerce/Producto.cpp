#include "stdafx.h"
#include "Producto.h"

using namespace std;

int Producto::contP;

#pragma region Constructores
Producto::Producto() {
	nombreProducto = "";
	descripcion = "";
	cveCategoria = 0;
}

Producto::Producto(string _nombreProducto, string _descripcion, int _cveCategoria) {
	iDProducto = ++contP;
	nombreProducto = _nombreProducto;
	descripcion = _descripcion;
	cveCategoria = _cveCategoria;
}

Producto::~Producto() {
}
#pragma endregion

#pragma region Propiedades
int Producto::getIDProducto() {
	return iDProducto;
}

string Producto::getNombreProducto() {
	return nombreProducto;
}
void Producto::setNombreProducto(string NewNombreProducto) {
	nombreProducto = NewNombreProducto;
}

string Producto::getDescripcion() {
	return descripcion;
}
void Producto::setDescripcion(string NewDescripcion) {
	descripcion = NewDescripcion;
}

int Producto::getCveCategoria() {
	return cveCategoria;
}
void Producto::setCveCategoria(int NewCveCategoria) {
	cveCategoria = NewCveCategoria;
}
#pragma endregion
