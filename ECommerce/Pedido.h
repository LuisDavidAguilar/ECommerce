#pragma once
#include "Cliente.h"
#include <string>

using namespace std;

class Pedido {
private:
	static int contPedido;
	int iDPedido;
	string fechaPedido;
	int cveCliente;
	string fechaSalida;
	double total;
public:

#pragma region Constructores
	Pedido();
	Pedido(int _CveCliente, string _FechaPedido, string _FechaSalida, double Total);
	virtual ~Pedido();
#pragma endregion

#pragma region Prodiedades
	int getId();

	string getFechaPedido();
	void setFechaPedido(string NewFechaPedido);

	string getFechaSalida();
	void setFechaSalida(string NewFechaSalida);

	double getTotal();
	void setTotal(double NewTotal);
#pragma endregion

};
