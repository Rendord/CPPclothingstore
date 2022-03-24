
#pragma once
#include "article.h"
#include <string>

class ClothingStore {
private:
	std::string name;
	Article articles[100];
	int num_articles;

public:
	ClothingStore(std::string);
	void addArticle(std::string, std::string);
	std::string toString();
};