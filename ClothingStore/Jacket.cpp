#include "Jacket.h"

Jacket::Jacket(std::string brand, std::string model, bool hood) 
{
	this->brand = brand;
	this->model = model;
	this->hood = hood;
}

std::string Jacket::toString() {
	std::ostringstream ostr;

	ostr << model << " " << brand << " " << hood;

	return ostr.str();


}