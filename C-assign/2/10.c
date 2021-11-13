//find even and odd number using condition operator (ternary operator)

#include <stdio.h>
#include <conio.h>

int main (){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    n%2==0 ? printf("%d is even",n) : printf("%d is odd",n);

    return 0;
}