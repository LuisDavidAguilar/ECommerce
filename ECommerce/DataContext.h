#pragma once

#include "Contrato.h"
#include "TarjetaCredito.h"
#include <vector>

using namespace std;

class DataContext
{
private:
	vector<TarjetaCredito> Tarjetas;
	vector<Contrato> Contratos;
public:
	DataContext();
	virtual ~DataContext();

#pragma region Propiedades
	vector<TarjetaCredito> &getTarjetas();
	vector<Contrato> &getContratos();
#pragma endregion

#pragma region Metodos
	template<class Tvector, class Tobjecto>
	static void Create(Tvector&, const Tobjecto&);

	template<class Tobjecto>
	static bool Exists(const vector<Tobjecto>&, int);

	template<class Tobjecto>
	static Tobjecto FindById(const vector<Tobjecto>&, int);

	template<class Tobjecto>
	inline bool Delete(const vector<Tobjecto> &, int);
#pragma endregion
};

template<class Tvector, class Tobjecto>
inline void DataContext::Create(Tvector &lista, const Tobjecto &obj)
{
	lista.push_back(obj);
}

template<class Tobjecto>
inline bool DataContext::Exists(const vector<Tobjecto>&, int)
{
	bool exist = false;
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista.at(i).getId() == id)
		{
			exist = true;
			break;
		}
	}
	return exist;
}

template<class Tobjecto>
inline Tobjecto DataContext::FindById(const vector<Tobjecto> &lista, int id)
{
	Tobjecto objectFound;
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista.at(i).getId() == id)
		{
			objectFound = lista.at(i);
			break;
		}
	}
	return objectFound;
}


template<class Tobjecto>
inline bool DataContext::Delete(const vector<Tobjecto> &lista, int id)
{
	bool deleted = false;
	for (int i = 0; i < lista.size(); i++)
	{
		if (lista.at(i).getId() == id)
		{
			lista.erase(lista.begin() + i);
			deleted = true;
			break;
		}
	}
	return deleted;
}