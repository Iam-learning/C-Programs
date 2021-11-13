// program to check whether a number is postive or negative

#include <stdio.h>
#include <conio.h>

int main (){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>=0){
        printf("%d is a postive number",n);
    }
    else{
        printf("%d is a negative number",n);
    }

    return 0;
}