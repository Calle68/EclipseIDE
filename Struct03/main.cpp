/*
 * main.cpp
 *
 *  Created on: 17.02.2024
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream>

using std::string; using std::cout;

struct Person
{
	string name_;
	int alter_;
	string ort_;

	void drucke();
};

void Person::drucke()
{
	cout << name_ << " (" << alter_ << ") aus " << ort_ << "\n";
}

int main ()
{
	Person otto {"Bernd", 55, "Bremen"};
	otto.drucke();
	Person carsten {"Carsten", 55, "Jüchen"};
	carsten.drucke();
}
