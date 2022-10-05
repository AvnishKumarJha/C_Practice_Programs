// C Program to Find Smallest and Largest Element in an Array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20],min,max,n,i;
    printf("\n Enter The Number Of Elements in an Array:- \n");
    scanf("%d",&n);
    printf("\n Enter Elements of Array:- \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Elements of Array: \n");

    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

    min=max=arr[0];

    for ( i = 0; i < n; i++)
    {
        if (arr[i]>max)     
        {
            max=arr[i];
        }
        if (arr[i]<min)     
        {
            min=arr[i];
        }
    }

    printf("\n Smallest Elements of Array: %d",min);
    printf("\n Largest  Elements of Array: %d",max);
    
return 0;
}