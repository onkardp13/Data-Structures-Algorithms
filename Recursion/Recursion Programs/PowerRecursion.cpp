// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int pow(int m,int n)
{
	if (n == 0)
		return 1;

	return pow(m, n - 1) * m;
}

int pow1(int m,int n)
{
	if (n == 0)
		return 1;

	if (n % 2 == 0)
		return pow1(m * m, n / 2);
	else
		return m * pow1(m * m, (n - 1) / 2);
}

int main()
{
	int m = 2, n = 9;
	printf("%d power %d is %d",m,n,pow1(m,n));
	return 0;
}

