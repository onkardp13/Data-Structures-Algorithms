// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int fact(int n)
{
	if (n == 0)
		return 1;

	return fact(n - 1) * n;
}

int Ifact(int n)
{
	int fact = 1;

	for (int i=1;i<=n;i++)
	{
		fact = fact * i;
	}

	return fact;
}

int main()
{
	printf("Factorial is:%d ",Ifact(5));
	return 0;
}

