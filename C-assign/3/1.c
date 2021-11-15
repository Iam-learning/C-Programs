//greatest number between two using ternary operator

#include <stdio.h>
#include <conio.h>

int main (){

    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);

    (a>b) ? printf("a>b") : printf("b>a");

    return 0;
}