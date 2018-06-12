#pragma once

#include <string>

class Usuarios
{
private:

	int idUsuario;
	std::string emailUsuario;
	std::string password;
	unsigned int rol;

public:

#pragma region Constructores
	Usuarios();
	Usuarios(int, const std::string, const std::string, unsigned int);
	virtual ~Usuarios();
#pragma endregion

#pragma region Propiedades

	int getId() const;

	const std::string& getEmailUsuario() const;
	void setEmailUsuario(const std::string&);

	const std::string& getPassword() const;
	void setPassword(const std::string&);

	unsigned int getRol() const;
	void setRol(const unsigned int&);

#pragma endregion

#pragma region Metodos
#pragma endregion
};

