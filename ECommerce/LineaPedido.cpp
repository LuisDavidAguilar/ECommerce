#include "stdafx.h"
#include "LineaPedido.h"

int LineaPedido::contLineaPedido;

#pragma region Constructores
LineaPedido::LineaPedido() {
	cvePedido = 0;
	precio = 0;
	cantidad = 0;
	precioTotal = 0;
}

LineaPedido::LineaPedido(int _CvePedido, double _Precio, int _Cantidad, double _PrecioTotal) {
	contLineaPedido++;
	iDLineaPedido = contLineaPedido;
	cvePedido = _CvePedido;
	precio = _Precio;
	cantidad = _Cantidad;
	precioTotal = _PrecioTotal;
}

LineaPedido::~LineaPedido() {
}
#pragma endregion

#pragma region Propiedades
int LineaPedido::getId() {
	return iDLineaPedido;
}

int LineaPedido::getCvePedido() {
	return cvePedido;
}
void LineaPedido::setCvePedido(int NewCvePedido) {
	cvePedido = NewCvePedido;
}

double LineaPedido::getPrecio() {
	return precio;
}
void LineaPedido::setPrecio(double NewPrecio) {
	precio = NewPrecio;
}

int LineaPedido::getCantidad() {
	return cantidad;
}
void LineaPedido::setCantidad(int NewCantidad) {
	cantidad = NewCantidad;
}

double LineaPedido::getPrecioTotal() {
	return precioTotal;
}
void LineaPedido::setPrecioTotal(double NewPrecioTotal) {
	precioTotal = NewPrecioTotal;
}
#pragma endregion