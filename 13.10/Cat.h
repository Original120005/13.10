#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Cat : public Animal {

public:
	Cat() = default;
	Cat(string n, double k, string c) : Animal(n, k, c) {}

	virtual void Eat() {
		cout << "Cats food: fish" << endl;
	}
	virtual void Move() {
		cout << "Move: mid movement speed" << endl;
	}
};
