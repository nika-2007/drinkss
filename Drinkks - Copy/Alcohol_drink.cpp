#include "Alcohol_drink.h"
#include<string>
#include<iostream>
using namespace std;
Alcohol_drink :: Alcohol_drink() {
}
Alcohol_drink :: Alcohol_drink(string name, int price, string company, string country, 
	string type, int alcInclude) {
	this->name = name;
	this->price = price;
	this->company = company;
	this->country = country;
	this->type = type;
	this->alcInclude = alcInclude;
}
void Alcohol_drink :: printAlcohol_drink() {
	cout << name << " " << price << " " << company << " " << country << " " << type << " " << alcInclude <<endl;
}