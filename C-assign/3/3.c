// simple caculator usinig switch
#include <stdio.h>
#include <conio.h>

int main (){

    int a,b;
    char op;

    printf("enter a and b: ");
    scanf("%d %d",&a,&b);

    printf("select operation (+ , - , * , /) : ");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("sum of a and b is: %d",a+b);
        break;
    case '-':
        printf("sub of a and b is: %d",a-b);
        break;
    case '*':
        printf("mul of a and b is: %d",a*b);
        break;
    case '/':
        printf("div of a and b is: %d",a/b);
        break;
    default:
        printf("inavlid operation");
    }
    

    return 0;
}