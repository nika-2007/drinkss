#include "Cold_drinks.h"
#include<string>
#include<iostream>
#include<vector>
using namespace std;
Cold_drinks :: Cold_drinks() {
}
Cold_drinks :: Cold_drinks(string name, int price, string company, string country, 
	string type, vector<string> ingredients, int kaloria, bool sugar) {
	this->name = name;
	this->price = price;
	this->company = company;
	this->country = country;
	this->type = type;
	this->ingredients = ingredients;
	this->kaloria = kaloria;
	this->sugar = sugar;
}
void Cold_drinks :: printCold_drinks() {
	cout << name << " " << price << " " << company << " " << country << " "
		<< type << " " << kaloria << " " << sugar << endl;
	cout << "ingredientebi: " << endl;
	for (int i = 0; i < ingredients.size(); i++) {
		cout << ingredients[i] << " ";
	}
	cout << endl;
}