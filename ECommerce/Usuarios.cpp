#include "stdafx.h"
#include "Usuarios.h"

using namespace std;

#pragma region Constructores

Usuarios::Usuarios()
{
}

Usuarios::Usuarios(int _id, const string _email, const string _password, unsigned int _rol) : idUsuario(_id), emailUsuario(_email), password(_password), rol(_rol)
{
}


Usuarios::~Usuarios()
{
}

#pragma endregion

#pragma region Propiedades

int Usuarios::getId() const
{
	return idUsuario;
}

const string & Usuarios::getEmailUsuario() const
{
	return emailUsuario;
}

void Usuarios::setEmailUsuario(const std::string &email)
{
	emailUsuario = email;
}

const std::string & Usuarios::getPassword() const
{
	return password;
}

void Usuarios::setPassword(const std::string &pass)
{
	password = pass;
}

unsigned int Usuarios::getRol() const
{
	return rol;
}

void Usuarios::setRol(const unsigned int &new_rol)
{
	rol = new_rol;
}

#pragma endregion

#pragma region Metodos



#pragma endregion