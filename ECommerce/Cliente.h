#pragma once
#include <string>
using namespace std;
class Cliente
{

private:
	static int ContadorIdCliente;
	int IdCliente;
	string NombreCliente;
	string Direccion;
	string Ciudad;
	string Estado;
	string Cp;
	string Telefono;
public:
	Cliente();
	Cliente(string _Nombre, string _Direccion, string _Ciudad, string _Edo, string _Cp, string _Telefono);

	int getId();
	string getNombre();
	string getDireccion();
	string getCiudad();
	string getEstado();
	string getCp();
	string getTelefono();

	void setNombre(string NewNombre);
	void setDireccion(string NewDireccion);
	void setCiudad(string NewCiudad);
	void setEstado(string NewEstado);
	void setCp(string NewCp);
	void setTelefono(string NewTelefono);
	virtual ~Cliente();
};

