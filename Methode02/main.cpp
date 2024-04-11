/*
 * main.cpp
 *
 *  Created on: 18.02.2024-2000
 *  Author: Fehlhaber
 */
#include <iostream>
#include "person.h"

using std::cout;


int main()
{
	Person paul {"Paul", 23, "Dresden"};
	cout << "Sie sind " << paul << ", richtig?\n";
}


