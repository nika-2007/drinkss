#include "Drink.h"
#include<string>
#include<iostream>
using namespace std;
Drink::Drink() {
}
Drink::Drink(string name, int price, string company, string country) {
	this->name = name;
	this->price = price;
	this->company = company;
	this->country = country;
}
void Drink::printDrink() {
	cout << name << " " << price << " " << company << " " << country << endl;
}
