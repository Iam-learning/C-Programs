#include <stdio.h>
#include <conio.h>

int main() 
{
    
    int n,i,fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n==0){
        goto zero;
    }

    fact=1;
    i=n;

    start:
    fact = fact*n;
    n--;

    if (n>0){
        goto start;
    }

    printf("Factorial of %d is %d",i,fact);
    goto end;
    
    zero:
    printf("Factorial of 0 is 1");

    end:

    return 0;
}