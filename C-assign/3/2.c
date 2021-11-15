//greatest number between three using ternary operator

#include <stdio.h>
#include <conio.h>

int main (){

    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    (a>b) ? 
        (a>c) ? printf ("a greatest") : printf("c greatest") : (b>c) ? printf("b greatest") : printf("c greatest");

    return 0;
}