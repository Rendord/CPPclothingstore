#pragma once
#include "article.h"
#include <string>

class Trousers : public Article {

private:
	int num_pockets;
public:
	Trousers(std::string, std::string, std::string);
	std::string toString();

};
