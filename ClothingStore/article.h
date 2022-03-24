#pragma once
#include <string>

class Article {
private:
	std::string brand;
	std::string model;

public:
	Article();
	Article(std::string, std::string);
	virtual std::string toString();
};