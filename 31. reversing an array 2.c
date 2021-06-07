#include <stdio.h>
#include <conio.h>

void main() 
{
    
    int a[5],t,i,j;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Original array: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

////////////////////////////////////////////
    
    j=4;
    for (int i = 0; i <=5/2; i++)
    {
          t  = a[i];
        a[i] = a[j];
        a[j] = t;
        
        j--;
    
    }

    printf("\nReversed array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
