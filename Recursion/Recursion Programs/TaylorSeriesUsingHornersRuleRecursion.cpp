// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

double e(int x,int n)
{
	static double s;
	if (n == 0)
		return s;

	s = 1 + x * s / n;

	return e(x,n-1);
}

int main()
{
	printf("%lf \n",e(1,4));
  	return 0;
}

