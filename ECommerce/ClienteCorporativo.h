#pragma once
#include "Cliente.h"
class ClienteCorporativo :
	public Cliente
{
private:
	//static int ContadorCorporativo;
	//int IdClienteLocal;
	string ClaveDeContrato;
public:
	ClienteCorporativo();
	ClienteCorporativo(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono, string _ClaveDeContrato);
	string getClaveDeContrato();
	//int getContadorCorporativo();
	void setClaveDeContrato(string NewClaveDeContrato);
	virtual ~ClienteCorporativo();
};

