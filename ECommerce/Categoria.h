#pragma once
#include <string>

class Categoria {
private:
	static int contC;
	int iDCategoria;
	std::string nombreCategoria;
public:

#pragma region Constructores
	Categoria();
	Categoria(std::string _nombreCategoria);
	virtual ~Categoria();
#pragma endregion

#pragma region Propiedades
	int getIDCategoria();
	std::string getNombreCategoria();
	
	void setNombreCategoria(std::string NewNombreCategoria);
#pragma endregion
};
