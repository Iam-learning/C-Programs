//Program to find a largest number from given THREE ints using SWITCH CASE

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    switch (a>b)
    {
    
    case 1: 
        switch (a>c)
        {
        case 1:
            printf("a is greatest");
            break;
        
        case 0:
            printf("c is greatest");
            break;
        }
        break;
    
    case 0: 
        switch(b>c)
        {
            case 1:
            printf("b is greatest");
            break;

            case 0:
            printf("c is greatest");
            break;
        }

    }

    return 0;

}