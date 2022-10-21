#include <iostream>
#include "Animal.h"
#include "Parrot.h"
#include "Pinguin.h"
#include "Dolphin.h"
#include "Cat.h"
#include "Dog.h"
using namespace std;

int main() {
	LLAnimal* ptr = nullptr;

	ptr = new Parrot("Parrot", 2, "Africa");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();
	p->Fly();
	delete ptr;


	ptr = new Pinguin("Pinguin", 41, "Antarctica");
	ptr->Eat();
	ptr->Move();
	Pinguin* pn = static_cast<Pinguin*>(ptr);
	pn->Print();
	pn->Swim();
	delete ptr;


	ptr = new Dolphin("Striped Dolphin", 160, " waters");
	ptr->Eat();
	ptr->Move();
	Dolphin* d = static_cast<Dolphin*>(ptr);
	d->Print();
	d->Swim();
	delete ptr;


	ptr = new Cat("Cat", 5, "Home");
	ptr->Eat();
	ptr->Move();
	Cat* c = static_cast<Cat*>(ptr);
	c->Print();
	delete ptr;


	ptr = new Dog("Dog", 16, "HOME");
	ptr->Eat();
	ptr->Move();
	Dog* dog = static_cast<Dog*>(ptr);
	dog->Print();
	delete ptr;

}