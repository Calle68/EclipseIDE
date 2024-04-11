/*
 * main.cpp
 *
 *  Created on: 17.02.2024 - 20:10
 *  Author: Fehlhaber
 */

#include <string>
#include <iostream> //cout, ostream
#include <fstream> //ofstream
#include <sstream> //ostringstream

using std::string; using std::cout; using std::cin;

struct Person
{
	string name_;
	int alter_;
	string ort_;
	void drucke(std::ostream& os);
};

void Person::drucke(std::ostream& os)
{
	os << name_ << " (" << alter_ << ") aus " << ort_;
}

int main()
{
	string name;
	int alter;
	string ort;
	cout << "Name eingebn: \n";
	cin >> name;
	cout << "Alter eingeben: \n";
	cin >> alter;
	cout << "Ort eingeben: \n";
	cin >> ort;

	Person karl {name, alter, ort};
	karl.drucke(cout); //auf den Bildschirm
	cout << "\n";
	std::ofstream datei {"person.txt"};
	karl.drucke(datei); //in Datei
	std::ostringstream oss{}; //schreibt in einen String
	karl.drucke(oss);
	if(oss.str() == "Karl (12) aus Stetten") //"Karl (12) aus Stetten"
	{
		cout << "ok\n";
	} else
	{
		cout << "Fehler in der Person! \n";
		return 1; //Fehler nach außen weiterleiten
	}
}
