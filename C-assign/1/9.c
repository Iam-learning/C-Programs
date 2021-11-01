// cube of a number

#include <stdio.h>
#include <conio.h>

int main (){

    int a;
        
    printf("enter the number: ");
    scanf("%d", &a); 

    int cube = a*a*a;
    printf("cube of %d is %d", a,cube );

    return 0;
}