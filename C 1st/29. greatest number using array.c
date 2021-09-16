#include <stdio.h>
#include <conio.h>

int main() 
{
    
    int a[5],max;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    max = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i]>max){
            max=a[i];
        }
    }
    
    printf("gratest number is: %d", max);



    return 0;
}