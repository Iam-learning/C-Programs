#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
        
    printf("enter the first number: ");
    scanf("%d", &a);  
    
    printf("enter the first number: ");
    scanf(" %d", &b);
   
    int sum = a + b;
    printf("sum of numbers %d and %d is %d", a,b, sum );

    return 0;
}
