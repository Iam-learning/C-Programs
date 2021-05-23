// Program to find a largest number from given TWO ints using SWITCH CASE
#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    switch (a>b)
    {
    case 1: 
        printf("a is greater than b");
        break;
    
    case 0: 
        printf("a is less than b");
        break;
    }

    return 0;

}