// C Program to Find Sum Of First n Natural Numbers in O(1).
// C PROGRAM TO SUM FIRST N NUMBERS IN O(N) THEN O(1) (WITH DERIVATION).

#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d",&n);

    // Sum = 1 + 2 + 3+ 4+ 5 +....+n

    // Runs in Linear time
    // for (int i = 1; i <=n; i++)
    // {
    //     sum+=i;
    // }

    // Formula = (n*n + n)/2;

    // Runs in Constant time
    sum = (n*n + n)/2; // (n^2 +n)/2
    printf("sum of first %d natural number is: %d\n",n,sum);
    

return 0;
}