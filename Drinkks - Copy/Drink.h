#pragma once
#include<string>
using namespace std;
class Drink
{
public:
	  string name, company, country;
	  int price;
	  Drink();
	  Drink(string name, int price, string company, string country);
	  void printDrink();
};

