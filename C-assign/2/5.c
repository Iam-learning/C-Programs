// program to relate two integer using =,>,<

#include <stdio.h>
#include <conio.h>

int main (){

    int a,b;

    printf("enter n1 : ");
    scanf("%d",&a);
    printf("enter n2 : ");
    scanf("%d",&b);

    if(a>b) printf("n1>n2");
    else if (b>a) printf("n1<n2");
    else printf("n1=n2");    

    return 0;
}