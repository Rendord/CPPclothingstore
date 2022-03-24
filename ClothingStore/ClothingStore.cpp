#pragma once
#include "clothingstore.h"
#include <sstream>

ClothingStore::ClothingStore(std::string name) {
	this->name = name;
	this->num_articles = 0;
}

void ClothingStore::addArticle(std::string brand, std::string model) {
	this->articles[num_articles] = Article(brand, model);
	this->num_articles++;
}

std::string ClothingStore::toString() {
	std::ostringstream ostr{};

	ostr << name;

	return ostr.str();

}