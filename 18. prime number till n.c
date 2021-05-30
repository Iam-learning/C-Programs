//wap to print all prime numbers from 1 to n
#include <stdio.h>
#include <conio.h>

int main(){

int n,i,a;
int factor = 0;

printf("Enter an integer: ");
scanf("%d", &n);

for(a=1;a<=n;a++){


    for (i=0; i<=a; i++){
        if (a%i==0){
            factor++;
        }
    }

    if (factor==2){
        printf("%d is a prime number\n",a);
    }



}
return 0;
}