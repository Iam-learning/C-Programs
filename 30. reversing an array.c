#include <stdio.h>
#include <conio.h>

void main() 
{
    
    int a[5],b[5],n;

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

    n=0;
    for (int i = 4; i >= 0; i--)
    {
        b[n] = a[i];
        n++;
    }
    
    printf("\nReversed array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    
}