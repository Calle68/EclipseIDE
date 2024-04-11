/*
 * main.cpp
 *
 *  Created on: 14.02.2024
 *  Author: Fehlhaber
 */

#include <array>
#include <iostream>
#include<numeric>
#include<algorithm>

using std::cout; using std::cin;

using Januar = std::array<int,31>;

void initJanuar(Januar& jan)
{
	std::iota(begin(jan), end(jan), 1);
}

int sumJanuar(const Januar& jan)
{
	return std::accumulate(begin(jan), end(jan), 0);
}


int main()
{
	Januar jan;
	initJanuar(jan);
	int sum = sumJanuar(jan);

	cout << sum << "\n";
}
