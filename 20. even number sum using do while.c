// sum of even numbers using do while

#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    int i=0,even=0;

    printf("Enter an integer: ");
    scanf("%d", &n);

   printf("even numbers:\n"); 

    do
    {
       //printf("%d\n",i);
       
       i=i+2;
       even = even+i;
    }
    while (i<n);

   printf("sum of even numbers is %d",even);

    return 0;
}