#pragma once
#include "clothingstore.h"
#include <sstream>
#include <iostream>
#include "trousers.h"
#include "Jacket.h"

ClothingStore::ClothingStore(std::string name, int size) {
	this->name = name;
	this->size = size;
	this->num_articles = 0;
	this->articles = new Article * [size];
}

ClothingStore::~ClothingStore() {
	for (int i = 0; i < size; i++)
	{
		delete this->articles[i];
	}
	delete articles;
}

void ClothingStore::addArticle(std::string article) {
	std::stringstream ss;
	ss << article;
	std::string type;
	std::string brand;
	std::string name;
	ss >> type;
	ss >> brand;
	ss >> name; 
	if (type == "trousers") {
		std::string num_pockets;
		ss >> num_pockets; 
		this->articles[num_articles] = new Trousers(brand, name, num_pockets);
	}
	else {
		bool hood;
		ss >> hood;
		this->articles[num_articles] = new Jacket(brand, name, hood);
	}

	this->num_articles++;
}

void ClothingStore::printArticles() {
	for (int i = 0; i < num_articles; i++) 
	{
		std::cout << this->articles[i]->toString() << std::endl;
	}
}

std::string ClothingStore::toString() {
	std::ostringstream ostr{};

	ostr << "Shop " << name << " has " << num_articles << " articles";

	return ostr.str();

}