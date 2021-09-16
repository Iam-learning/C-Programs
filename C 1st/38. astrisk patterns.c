#include <stdio.h>
#include <conio.h>

int main() 
{
printf("\nPattern 1: \n");

for (int j = 0; j < 5; j++)
{
    
    for (int i = 0; i < 5; i++)
    {
        printf("* ");
    }

    printf("\n");
}      

///////////////////////////////////////

printf("\nPattern 2: \n");

for (int j = 0; j < 5; j++)
{
    
    for (int i = 0; i <= j; i++)
    {
        printf("* ");
    }

    printf("\n");
}      

///////////////////////////////////////

printf("\nPattern 3: \n");

for (int j = 5; j > 0; j--)
{
    
    for (int i = 0; i < j; i++)
    {
        printf("* ");
    }

    printf("\n");
}      

///////////////////////////////////////

printf("\nPattern 4: \n");

int n =5;
for (int j = 0; j < 5; j++)
{
    
    for (int i = 0; i < n; i++)
    {
        printf(" ");
        
    }
    n--;
    
    for (int i = 0; i <= j; i++)
    {
        printf("* ");
    }

    printf("\n");

   
}      

    
    return 0;
}