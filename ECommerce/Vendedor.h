#pragma once
#include <string>

using namespace std;
class Vendedor
{
private:
	static int Id;
	string IdVendedor;
	string NombreVendedor;
public:
	Vendedor();
	Vendedor(string _NombreVendedor);
	virtual ~Vendedor();
	string getId();
	string getNombre();
};

