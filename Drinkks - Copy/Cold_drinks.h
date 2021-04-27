#pragma once
#include"Drink.h"
#include<string>
#include<vector>
using namespace std;
class Cold_drinks : public Drink
{
public:
	  string type;
	  bool  sugar;
	  vector<string> ingredients;
	  int kaloria;
	  Cold_drinks();
	  Cold_drinks(string name, int price, string company, string country, string type, 
		  vector<string> ingredients, int kaloria, bool sugar);
	  void printCold_drinks();
};

