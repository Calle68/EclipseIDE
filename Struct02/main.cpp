/*
 * main.cpp
 *
 *  Created on: 13.02.2024
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct Person {
	string name_;
	int alter_;
	string ort_;
};

Person erzeugePerson(string name, int alter, string ort) {
	return Person { name, alter, ort };
}

void drucke(Person p) {
	cout << p.name_ << " (" << p.alter_ << ") aus " << p.ort_ << "\n";
}

int main() {
	Person otto { "Carsten", 55, "Jüchen" };
	drucke(otto);
	drucke(erzeugePerson("Bernd", 55, "Bremen"));
}

