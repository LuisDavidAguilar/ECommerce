#pragma once
#include "Cliente.h"
class ClientePersonal :
	public Cliente
{
private:
	//static  int ContadorPersonal;
	string NoTarjeta;
public:
	ClientePersonal();
	ClientePersonal(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono, string _NoTarjeta);
	string getNoTarjeta();
	int getContadorPersonal();
	void setNoTarjeta(string NewNoTarjeta);
	virtual ~ClientePersonal();
};



