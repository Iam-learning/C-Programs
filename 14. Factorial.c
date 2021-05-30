#include <stdio.h>
#include <conio.h>

int main()
{
    int n,fact=1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int i=n;

    while (n>0)
    {
       fact=n*fact;
       n=n-1;
    }
    printf("factorial of %d is: %d", i,fact);
    return 0;
}

