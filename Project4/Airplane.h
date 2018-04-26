#pragma once
#include <string>
#include <iostream>
class Airplane
{
public:
	std::string type;
	int counter;
	int max_pasengers;
	Airplane();
	Airplane(std::string, int);
	bool Airplane::operator ==(Airplane &);
	friend  Airplane&operator ++( Airplane &);
	int Airplane::operator >(Airplane &);

	~Airplane();
};

