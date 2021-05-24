// wap to find whether a number is a prime number
#include <stdio.h>
#include <conio.h>

int main(){

int n,i;
int factor = 0;

printf("Enter an integer: ");
scanf("%d", &n);

    for (i=1; i<=n; i++){
        if (n%i==0){
            factor++;
        }
    }

    if (factor==2){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is NOT a prime number",n);
}


return 0;
}