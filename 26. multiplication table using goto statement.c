#include <stdio.h>
#include <conio.h>

int main() 
{
    int n,i=1,m=1;

    printf("Enter a number: ");

    scanf("%d", &n);

    start:

    printf("%d X %d = %d\n", n, i, m);

    i++;
    m = i*n;


    if (i <= 10){

        goto start;

    }

    return 0;
}