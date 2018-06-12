#include "stdafx.h"
#include "Categoria.h"

using namespace std;

int Categoria::contC;

#pragma region Constructores
Categoria::Categoria() {
	nombreCategoria = "";
}

Categoria::Categoria(string _nombreCategoria) {
	iDCategoria = ++contC;
	nombreCategoria = _nombreCategoria;
}

Categoria::~Categoria() {
}
#pragma endregion

#pragma region Propiedades
int Categoria::getId() {
	return iDCategoria;
}
string Categoria::getNombreCategoria() {
	return nombreCategoria;
}

void Categoria::setNombreCategoria(string NewNombreCategoria) {
	nombreCategoria = NewNombreCategoria;
}
#pragma endregion
