#include <stdio.h>

//Given a number N. Check whether it is divisble by 4.

int givenDivisible(int n);
int main (void)
{
        printf("%d", givenDivisible(80));
        return (0);
}

int givenDivisible(int n)
{
        if (n % 4 == 0)
                return (1);
        return (0);
}
