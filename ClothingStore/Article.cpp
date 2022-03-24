#include "article.h"
#include <sstream>
#include <string>


Article::Article() {
	this->brand = "unknown";
	this->model = "unknown";
}

Article::Article(std::string brand, std::string model) {
	this->brand = brand;
	this->model = model;
}

std::string Article::toString() {
	std::ostringstream ostr{};

	ostr << model + " " + brand;

	return ostr.str();


}