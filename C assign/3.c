#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
        
    printf("enter the first number: ");
    scanf("%d", &a);  
    
    printf("enter the first number: ");
    scanf(" %d", &b);
   
    int multi = a - b;
    printf("multiplication of numbers %d and %d is %d", a,b, multi );

    return 0;
}