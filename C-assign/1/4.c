//division of 2 nums

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
        
    printf("enter the first number: ");
    scanf("%f", &a);  
    
    printf("enter the second number: ");
    scanf(" %f", &b);
   
    int div = a / b;
    printf("sum of numbers %d and %d is %d", a,b, div );

    return 0;
}