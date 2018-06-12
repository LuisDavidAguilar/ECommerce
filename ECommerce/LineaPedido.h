#pragma once
#include <string>
#include "Pedido.h"

using namespace std;

class LineaPedido {
private:
	static int contLineaPedido;
	int iDLineaPedido;
	int cvePedido;
	double precio;
	int cantidad;
	double precioTotal;
public:
#pragma region Constructores
	LineaPedido();
	LineaPedido(int _CvePedido, double _Precio, int _Cantidad, double _PrecioTotal);
	virtual ~LineaPedido();
#pragma endregion

#pragma region Prodiedas
	int getId();

	int getCvePedido();
	void setCvePedido(int NewCvePedido);

	double getPrecio();
	void setPrecio(double NewPrecio);

	int getCantidad();
	void setCantidad(int NewCantidad);

	double getPrecioTotal();
	void setPrecioTotal(double NewPrecioTotal);
#pragma endregion
};
