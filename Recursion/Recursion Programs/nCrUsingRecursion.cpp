// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>


int fact(int n)
{
    if (n == 0)
        return 1;

    return fact(n - 1) * n;
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

int NCR(int n,int r)
{
    if (r==0 || n==r)
        return 1;

    return NCR(n - 1, r - 1) + NCR(n-1,r);
    
}
int main(){
    printf("%d \n", NCR(4,2));
  	return 0;
}

