#include "stdafx.h"
#include "ClienteCorporativo.h"


ClienteCorporativo::ClienteCorporativo()
{
	ClaveDeContrato = "";
}

ClienteCorporativo::ClienteCorporativo(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono, string _ClaveDeContrato) :Cliente(_Nombre, _Direccion, _Ciudad, _Edo, _Cp, _Telefono)
{
	ClaveDeContrato = _ClaveDeContrato;
	/*ContadorCorporativo++;
	IdClienteLocal = ContadorCorporativo;
	IdGeneral = getId();*/
}






string ClienteCorporativo::getClaveDeContrato() {
	return ClaveDeContrato;
}

/*int ClienteCorporativo::getContadorCorporativo() {
return ContadorCorporativo;
}*/


void ClienteCorporativo::setClaveDeContrato(string NewClaveDeContrato) {
	ClaveDeContrato = NewClaveDeContrato;
}

ClienteCorporativo::~ClienteCorporativo()
{
}
