#include "Airplane.h"



Airplane::Airplane()
{
}

Airplane::Airplane(std::string type, int counter)
{
	this->type = type;
	this->counter = counter;
}

bool Airplane::operator==(Airplane & air)
{
	return this->type == air.type;
}

int Airplane::operator>(Airplane & air)
{
	if (this->max_pasengers > air.max_pasengers)
		std::cout << this->type << " " << this->max_pasengers << std::endl;
	else 
		std::cout << air.type << " " << air.max_pasengers << std::endl;
	return 0;
}


Airplane::~Airplane()
{
}

Airplane & operator++(Airplane & air)
{
	 ++air.counter;
	 return air;
	
}
