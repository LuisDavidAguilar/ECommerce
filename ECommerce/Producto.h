#pragma once
#include <string>

class Producto {
private:
	static int contP;
	int iDProducto;
	std::string nombreProducto;
	std::string descripcion;
	int cveCategoria;
public:

#pragma region Constructores
	Producto();
	Producto(std::string _nombreProducto, std::string _descripcion, int _cveCategoria);
	virtual ~Producto();
#pragma endregion

#pragma region Propiedades
	int getIDProducto();
	
	std::string getNombreProducto();
	void setNombreProducto(std::string NewNombreProducto);
	
	std::string getDescripcion();
	void setDescripcion(std::string NewDescripcion);
	
	int getCveCategoria();
	void setCveCategoria(int NewCveCategoria);
#pragma endregion

};
