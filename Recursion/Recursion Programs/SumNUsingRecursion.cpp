// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int sum(int n)
{
	if (n == 0)
		return 0;

	return sum(n - 1) + n;
}

int isum(int n)
{
	int s = 0;

	for (int i=1;i<=n;i++)
	{
		s = s + i;
	}

	return s;
}

int main()
{
	printf("Sum is %d",isum(5));
	return 0;
}

