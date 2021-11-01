#include <stdio.h>
#include <conio.h>

int main (){

    int num1,num2,num3,num4,num5,sum,percent;

    printf("Enter 5 nums: ");
    scanf("%d\n%d\n%d\n%d\n%d\n",&num1,&num2,&num3,&num4,&num5);

    sum=num1+num2+num3+num4+num5;
    percent=(sum/5)*100;

    printf("percentage = %d",percent);

}