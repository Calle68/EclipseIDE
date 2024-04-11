/*
 * main.cpp
 *
 *  Created on: 14.02.2024
 *  Author: Fehlhaber
 *
 *  Übung mit Standard Vector
 */

#include <iostream>
#include <vector>

using std::cout;

int main()
{
	int vectorSize;
	int vectorCapacity;
	std::vector<int> quadrate{};
	for(int idx=0; idx<21; ++idx)
	{
		int ergebnis;
		ergebnis = idx * idx;
		quadrate.push_back(ergebnis);
		cout << "Das Quadrat von " << idx << "² " << " = " << quadrate[idx] << "\n";
	}

	vectorSize = quadrate.size();
	cout << "Vectorgröße: " << vectorSize << "\n";
	vectorCapacity = quadrate.capacity();
	cout << "Vectorgröße: " << vectorCapacity << "\n";
}


