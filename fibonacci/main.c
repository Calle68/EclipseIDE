/*
 * main.c
 *
 *  Created on: 12.02.2024
 *  Author: Fehlhaber
 */

#include <stdio.h>

unsigned int fib(unsigned int n)
{
	int i, f1=0, f2=1, f3;

if (n<2) return n;

for (i=2; i<=n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f2;
}

int main(int argc, char *argv[])
{
	int i;
	for (i=0; i<10;i++)
		printf("fib(%d)=%u\n", i, fib(i));
	return 0;
}

