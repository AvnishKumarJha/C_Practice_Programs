// C Program to Calculate Power of a Number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int m = 2;
    // int m = 12;
    int m;
    printf("Enter the value of m\n");
    scanf("%d",&m);

    // int n = 5;
    // int n = 15;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    // int val = 1;
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    printf("The Value of %d to the Power %d is %lld", m, n, val);
return 0;
}