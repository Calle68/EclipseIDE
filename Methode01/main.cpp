/*
 * main.cpp
 *
 *  Created on: 18.02.2024-1940
 *  Author: Fehlhaber
 *  Methode inline definierern
 */

#include <string>
#include <iostream>

using std::cout;
using std::string; using std::ostream;

struct Person
{
	string name_;
	int alter_;
	string ort_;
	ostream& drucke(ostream& os)
	{
		return os << name_ << " (" << alter_ << ") aus " << ort_;
	}
};

std::ostream& operator<<(std::ostream& os, Person p)
{
return p.drucke(os);
}

int main() {
Person paul {"Paul", 23, "Dresden"};
cout << "Sie sind " << paul << ", richtig?\n";
}
