/*
 * main.cpp
 *
 *  Created on: 13.02.2024
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream>

using std::string; using std::cout; using std::endl;

struct Person
{
	string name_;
	int alter_;
	string ort_;
};

void drucke(Person p)
{
	cout << p.name_ << " (" << p.alter_ << ") aus " << p.ort_ << "\n";
}

int main()
{
	Person otto {"Bernd", 45, "Bremen"};
	drucke(otto);
}
