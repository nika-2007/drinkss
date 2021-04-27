#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Alcohol_drink.h"
#include"Cold_drinks.h"
#include"Drink.h"
using namespace std;
int main()
{
	ifstream fin("alcohol drinks.txt");
	ifstream finn("Cold drinks.txt");
	string c;
	Alcohol_drink t;
	Cold_drinks z;
	vector< Alcohol_drink > a;
	vector< Cold_drinks > s;
	for (int i = 0; i < 4; i++) {
		fin >> t.name >> t.price >> t.company >> t.country >> t.type >> t.alcInclude;
		a.push_back(t);
	}
	for (int i = 0; i < 5; i++) {
		finn >> z.name >> z.price >> z.company >> z.country >> z.type >> z.kaloria >> z.sugar;
		for (int i = 0; i < 3; i++) {
			fin >> c;
			z.ingredients.push_back(c);
		}
		s.push_back(z);
	}
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size() - 1; j++) {
			if (a[j].alcInclude < a[j + 1].alcInclude) {
				swap(a[i], a[i + 1]);
			}
		}
	}
	//for (int i = 0; i < a.size(); i++) {
	//	a[i].printAlcohol_drink();
	//}
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i].sugar == 0)
			s[i].printCold_drinks();
	}
	cout << endl;
}
