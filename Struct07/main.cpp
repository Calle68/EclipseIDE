/*
 * main.cpp
 *
 *  Created on: 17.02.2024 - 20:40
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream> //cout, ostream
#include <fstream> //ofstream
#include <sstream> //ostringstream

using std::ostream;
using std::string; using std::cout; using std::cin;

struct Person
{
	string name_;
	int alter_;
	string ort_;
	std::ostream& drucke(std::ostream& os);
};

std::ostream& Person::drucke(ostream& os)
{
	return os << name_ << " (" << alter_ << ") aus " << ort_;
}

std::ostream& operator<<(std::ostream& os, Person p)
{
	return p.drucke(os);
}


int main()
{
	Person paul {"Paul", 23, "Dresden"};
	cout << "Sie sind " << paul << ", richtig?\n";
}




