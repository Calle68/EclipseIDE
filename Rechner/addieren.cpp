/*
 * addieren.cpp
 *
 *  Created on: 11.02.2024
 *      Author: calle
 */
#include <iostream>

using std::cout; using std::cin; using std::endl;


int main()
{
	int zahl01, zahl02, ergebnis;

	cout << "Erste Zahl eingebne: " << endl;
	cin >> zahl01;
	cout << "Zweite Zahl eingeben: " << endl;
	cin >> zahl02;

	ergebnis = zahl01 + zahl02;

	cout << "Das Ergebnis ist :" << ergebnis << endl;
}



