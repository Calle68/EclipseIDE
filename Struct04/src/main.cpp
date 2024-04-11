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

string Person::gruss()
{
	return "Hallo " + this->name_ + " aus " + this->ort_;
	//return "Hallo " + name_ + " aus " + ort_;
}

int main()
{
	Person anna {"Anna", 33, "Hof"};
	Person nina {"Nina", 22, "Wyk"};
	anna.gruss();
	nina.gruss();
}
