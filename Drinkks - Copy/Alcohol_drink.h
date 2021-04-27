#pragma once
#include"Drink.h"
#include<string>
using namespace std;
class Alcohol_drink : public Drink
{
public:
	  string type, alcInclude;
	  Alcohol_drink();
	  Alcohol_drink(string name, int price, string company, string country, string type, int alcInclude);
	  void printAlcohol_drink();
};

