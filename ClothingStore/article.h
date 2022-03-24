#pragma once
#include <string>
#include <sstream>

class Article {
protected:
	std::string brand;
	std::string model;
	Article();
	Article(std::string, std::string);
	

public:
	virtual std::string toString() = 0;
};