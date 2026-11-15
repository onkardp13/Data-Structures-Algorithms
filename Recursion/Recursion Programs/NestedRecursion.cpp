// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int fun(int n)
{
	if (n > 100)
	{
		return n - 10;
	}
	else
	{
		return fun(fun(n+11));
	}
}

int main()
{
	printf("%d", fun(30));
	return 0;
}

