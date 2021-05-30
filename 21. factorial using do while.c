#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int fact=1;
    int i=n;

    do
    {
        fact=n*fact;
        n=n-1;
    } while (n>0);
        
    printf("factorial of %d is: %d", i,fact);

    
    return 0;
}

