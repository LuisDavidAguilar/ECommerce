#include "stdafx.h"
#include "Pedido.h"

int Pedido::contPedido;

#pragma region Constructores
Pedido::Pedido() {
	fechaPedido = "";
	cveCliente = 0;
	fechaSalida = "";
	total = 0;
}

Pedido::Pedido(int _CveCliente, string _FechaPedido, string _FechaSalida, double _Total) {
	iDPedido = ++contPedido;
	fechaPedido = _FechaPedido;
	cveCliente = _CveCliente;
	fechaSalida = _FechaSalida;
	total = _Total;
}

Pedido::~Pedido() {
}
#pragma endregion

#pragma region Propiedades
int Pedido::getId() {
	return iDPedido;
}

string Pedido::getFechaPedido() {
	return fechaPedido;
}
void Pedido::setFechaPedido(string NewFechaPedido) {
	fechaPedido = NewFechaPedido;
}

string Pedido::getFechaSalida() {
	return fechaSalida;
}
void Pedido::setFechaSalida(string NewFechaSalida) {
	fechaSalida = NewFechaSalida;
}

double Pedido::getTotal() {
	return total;
}
void Pedido::setTotal(double NewTotal) {
	total = NewTotal;
}
#pragma endregion
