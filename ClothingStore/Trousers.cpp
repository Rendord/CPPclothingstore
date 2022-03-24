#include "Trousers.h"

Trousers::Trousers(std::string brand, std::string model, std::string num_pockets)
{
	std::stringstream ss;
	ss << num_pockets;
	this->brand = brand;
	this->model = model;
	ss >> this->num_pockets;
}

std::string Trousers::toString() {
	std::ostringstream ostr;

	ostr << model << " " << brand << " " << num_pockets;

	return ostr.str();


}