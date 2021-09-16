//Program to find a largest number from given FOUR ints using SWITCH CASE

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,d;
    
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    switch (a>b)
    {
    
    case 1: 
        switch (a>c)
        {
            case 1:
                switch(a>d)
                {
                    case 1:
                    printf("a is greatest");
                    break;
                    case 0:
                    printf("d is greatest");
                    break;
                }
            break;

            case 0:
                switch(c>d)
                {
                    case 1:
                    printf("c is greatest");
                    break;
                    case 0:
                    printf("d is greatest");
                    break;
                }
        }
        break;
    
    case 0: 
        switch(b>c)
        {
            case 1:
                switch(b>d)
                {
                    case 1:
                    printf("b is greatest");
                    break;
                    case 0:
                    printf("d is greatest");
                    break;
                }
            break;

            case 0:
                switch(c>d)
                {
                    case 1:
                    printf("c is greatest");
                    break;
                    case 0:
                    printf("d is greatest");
                    break;
                }
            break;
        }

    }

    return 0;

}