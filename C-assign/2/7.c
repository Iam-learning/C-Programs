// program to check whether a year is leap year or not
//https://www.programiz.com/c-programming/examples/leap-year

#include <stdio.h>
#include <conio.h>

int main (){

    int year;

    printf("enter year: ");
    scanf("%d",&year);

    if(year%4==0) printf("leap year");
    else printf("Not a leap year");

    return 0;
}
