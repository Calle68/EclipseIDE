/*
 * main.cpp
 *
 *  Created on: 14.02.2024
 *  Author: Fehlhaber
 */

#include <vector>
#include <iostream>

int main()
{
	std::vector qus{1,4,9,16,25};
	for(auto it = qus.begin(); it != qus.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


