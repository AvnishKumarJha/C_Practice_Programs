// C Program To Print Number Pattern - 1.

/*
Write a C program to print the following number pattern for a
generalized value of n:-

0000000
 111111
  22222
   3333
    444
     55
      6


*/

// The above pattern is for n=7.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;  // n=7
    printf("Enter the given value of n\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>=i)
            {
                printf("%d", i);
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