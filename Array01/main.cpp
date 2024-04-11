/*
 * main.cpp
 *
 *  Created on: 12.02.2024
 *  Author: Fehlhaber
 */

#include <array>
#include <iostream>
#include "conio.h"

using std::cout; using std::array; using std::string;
using std::endl; using std::cin;

int main()
{
	int suchen;

	array<string, 7> wotag = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};
	cout << "Es gibt folgende Wochentage:" << "\n";
	for (int i; i<6; i++)
	{
		int j;
		j = i + 1;
		cout << j << " ist " << wotag[i] << endl;
	}

	cout << "Welcher Wochentag soll angezeigt werden? " << endl;
	cin >> suchen;

	switch(suchen)
	{
	case 1:
		cout << "Tag 1 ist: " << wotag[0] << "\n";
		break;
	case 2:
		cout << "Tag 2 ist: " <<  wotag[1] << "\n";
		break;
	case 3:
		cout << "Tag 3 ist: " <<  wotag[2] << "\n";
		break;
	case 4:
		cout << "Tag 4 ist: " <<  wotag[3] << "\n";
		break;
	case 5:
		cout << "Tag 5 ist: " <<  wotag[4] << "\n";
		break;
	case 6:
		cout << "Tag 6 ist: " <<  wotag[5] << "\n";
		break;
	case 7:
		cout << "Tag 7 ist: " <<  wotag[6] << "\n";
		break;
	}

	//cout << "Sie endet mit " << wotag.at(6) << "\n";
	system("pause");
}
