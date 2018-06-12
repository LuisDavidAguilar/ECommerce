#include "stdafx.h"
#include "ClientePersonal.h"


ClientePersonal::ClientePersonal()
{
	NoTarjeta = "";
}

ClientePersonal::ClientePersonal(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono, string _NoTarjeta) :Cliente(_Nombre, _Direccion, _Ciudad, _Edo, _Cp, _Telefono)
{
	NoTarjeta = _NoTarjeta;
	//ContadorPersonal++;
}


string ClientePersonal::getNoTarjeta() {
	return NoTarjeta;
}

/*int ClientePersonal::getContadorPersonal() {
return ContadorPersonal;
}*/



void ClientePersonal::setNoTarjeta(string NewNoTarjeta) {
	NoTarjeta = NewNoTarjeta;
}


ClientePersonal::~ClientePersonal()
{
}

