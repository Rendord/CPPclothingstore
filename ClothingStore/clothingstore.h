
#pragma once
#include "article.h"
#include <string>

class ClothingStore {
private:
	std::string name;
	int num_articles;
	int size;
	Article **articles;

	

public:
	ClothingStore(std::string, int);
	~ClothingStore();
	void addArticle(std::string);
	void printArticles();
	std::string toString();
};