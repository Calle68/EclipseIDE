/*
 * main.cpp
 *
 *  Created on: 17.02.2024
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream>

using std::string; using std::cout;

struct Person {
	string name_;
	int alter_;
	string ort_;
	string gruss();
};

string gruss(Person * const p)
{
	return "Hallo " + p->name_ + " aus " + p->ort_;
}

int main()
{
	Person anna {"Anna", 33, "Hof"};
	Person nina {"Nina", 22, "Wyk"};
	anna.gruss();
	nina.gruss();
}
