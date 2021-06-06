#include <stdio.h>
#include <conio.h>

void main() 
{
    
    int a[5],n,find;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter element to be searched: ");
    scanf("%d", &find);

    for (int i = 0; i < 5; i++)
    {
        if (find==a[i])
        {
            printf("found %d at index %d",find,i);
            goto end;
        }
        
    }

    if(a[1]<find){
    printf("\n%d not found", find);
    }

    end:
    printf(" ");
}