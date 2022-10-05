// C Program To Print Prime Numbers In A Given Range.

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n1, n2;
    printf("Enter First Number\n");
    scanf("%d", &n1);

    printf("Enter Second Number\n");
    scanf("%d", &n2);

    printf("The Prime numbers between %d and %d are: \n", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}