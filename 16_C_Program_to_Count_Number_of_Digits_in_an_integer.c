// C Program to Count Number of Digits in an Integer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, counter = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("There is only 1 digits in your number");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10; // n=10
            counter++;
        }
        printf("There are %d digits in your number", counter);
    }
    
    return 0;
}