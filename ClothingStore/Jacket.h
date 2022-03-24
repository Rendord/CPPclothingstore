#pragma once
#include "article.h"
#include <string>

class Jacket : public Article {

private:
	bool hood;
public:
	Jacket(std::string, std::string, bool);
	std::string toString();

};