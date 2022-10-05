// C Program To Print Star Pattern - 5.

/*
Write a c program to print the following star pattern for a 
generalized value of n:-

****
*  *
*  *
****

*/

// The above pattern is for n=4.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
return 0;
}