#pragma once

#include <string>
#include <vector>
#include <sstream>
#include <ctime>

using namespace std;

typedef std::vector<string> stringArray;

template<class VectorObjetos>

#pragma region Prototipos
stringArray Split(const string&, char);
#pragma endregion




#pragma region Funciones

stringArray Split(const string &str, char separetor) {
	stringArray result;
	int pos1 = 0;
	int pos2 = 0;
	while (pos2 != str.npos)
	{
		pos2 = str.find(separetor, pos1);
		if (pos2 != str.npos)
		{
			if (pos2 > pos1)
				result.push_back(str.substr(pos1, pos2 - pos1));
			pos1 = pos2 + 1;
		}
	}
	result.push_back(str.substr(pos1, str.size() - pos1));
	return result;
}

#pragma endregion