#pragma once
#include <iostream>
#include "Main.h"
using namespace std;

class Animal : public LLAnimal {
protected:
	string name;
	double kg;
	string continent;

public:
	Animal() = default;
	Animal(string n, double k, string c) {
		name = n;
		kg = k;
		continent = c;
	}
	virtual void Print() {
		cout << "Name: " << name << endl;
		cout << "Kg: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
};
