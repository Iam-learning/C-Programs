//WAP to perform subtraction of two user define numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
        
    printf("enter the first number: ");
    scanf("%d", &a);  
    
    printf("enter the second number: ");
    scanf(" %d", &b);
   
    int sub = a - b;
    printf("subtraction of numbers %d and %d is %d", a,b, sub );

    return 0;
}