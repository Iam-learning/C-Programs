#include <stdio.h>
#include <conio.h>

void main() 
{
    
    int a[3];

    printf("Enter 3 integers: \n");

    for(int i=0; i<=3; i++){

        scanf("%d", &a[i]);
    }    


    printf("%d ", a[0]);
    printf("%d ", a[1]);
    printf("%d ", a[3]);


}