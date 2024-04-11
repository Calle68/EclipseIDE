/*
 * main.cpp
 *
 *  Created on: 14.02.2024
 *  Author: Fehlhaber
 */

#include <vector>
#include <iostream>

using std::cout; using std::endl;

int main()
{
	std::vector quadrate{1,4,9,16,25};
	for(int zahl : quadrate)
	{
		cout << zahl << " ";
	}
	cout << endl;
}


