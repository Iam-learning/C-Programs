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

    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is the greatest"); //A
            }
            else{
                printf("d is the greatest");
            }
        }
        else{
            if(c>d){
               printf("c is the greatest"); //C
            }
            else{
                printf("d is the greatest"); //D
            }
        }
    }
    else{

        if(b>c){
            if(b>d){
               printf("b is the greatest"); //B
            }
            else{
               printf(" is the greatest"); //D
            }
        }
        else{
            if(c>d){
                printf("c is the greatest"); //C
            }
            else{
                printf("d is the greatest"); //D
            }
        }

    }

    return 0;
}