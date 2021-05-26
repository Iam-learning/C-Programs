#include <stdio.h>
#include <conio.h>

int main()
{
    int n,fact=1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int i=n;

    for (n;n>0;n=n-1)
    {
       fact=n*fact;
    }
    printf("factorial of %d is: %d", i,fact);
    return 0;
}

