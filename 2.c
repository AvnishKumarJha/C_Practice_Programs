// C Program to Find Sum Of First n Natural Numbers in O(1).
// C PROGRAM TO SUM FIRST N NUMBERS IN O(N) THEN O(1) (WITH DERIVATION).

#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    printf("Good Night!\n");
    printf("\n");

    int n, sum = 0;

    // Linear search O(1)

    // printf("Enter The Last Number Of Natural Number\n");
    // scanf("%d",&n);

    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i;
    // }

    // printf("Sum Of First %d N Natural Number is :- %d\n",n,sum);

    // Constsnt Time O(n)

    // formula = (n*n + n)/2;

    printf("\n");
    printf("Enter The Last Number Of Natural Number You Want To Be Sum:- \n");
    scanf("%d", &n);

    printf("\n");

    sum = (n * n + n) / 2;

    printf("Sum Of First %d N Natural Number is :- %d\n", n, sum);

    return 0;
}