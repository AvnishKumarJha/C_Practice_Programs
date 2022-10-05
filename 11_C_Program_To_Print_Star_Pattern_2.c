// C Program To Print Star Pattern - 2.

/*
Write a c program to print the following star pattern for a generalized value of n:-
         *
        **
       ***
      ****
*/

// The above pattern is for n = 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n = 5;
    int n;
    printf("Enter the value given by the user\n");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>=n-1)
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