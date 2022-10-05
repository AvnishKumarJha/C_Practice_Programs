// C Program to Find smallest Element in an Array.

#include <stdio.h>
int main()
{
    int a[30],i,num,smallest;

    printf("Enter no of elements :\n");
    scanf("%d",&num);

    // Read n elements in an array
    for(i =0; i<num;i++)
    scanf("%d",&a[i]);

    // consider first element as smallest
    smallest = a[0];
    for ( i = 0; i < num; i++)      
    {
        if (a[i]<smallest)
        {
            smallest = a[i];
        }
    }
    
    // print out the result
    printf("\nsmallest element :%d",smallest);

    
return 0;
}