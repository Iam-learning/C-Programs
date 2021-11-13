// program to check whether a char is an alphabet or not

#include <stdio.h>
#include <conio.h>

int main (){

    char c;
    
    printf("Enter a char: ");
    scanf("%c",&c);

    if((c>='a' && c<='z') || (c<='A' && c>='Z'))
        printf("%c is an alphabet",c);
    else
        printf("%c is not an alphabet",c);

    return 0;
}