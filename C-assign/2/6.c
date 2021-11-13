//program to check the largest number using nested if else

#include <stdio.h>
#include <conio.h>

int main (){

    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b){
        if(a>c) printf("a greatest");
        else printf("c greatest");
    }
    else{
        if(b>c) printf("b greatest");
        else printf("c greatest");
    }

    return 0;
}