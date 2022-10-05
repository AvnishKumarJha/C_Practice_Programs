// C Program to Generate Multiplication Table of a Given Number.

#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Good Morning\n");
    printf("\n");
    
    int num;
    printf("Enter The Multiplication Table Number You Would We Want :- \n");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    
    printf("\n");
    
    printf("Succesfully Implemented The Multiplication Number Table Code.");
    
    return 0;
}