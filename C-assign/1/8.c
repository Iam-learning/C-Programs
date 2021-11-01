//ascii values
//american standard code for information interchange

#include <stdio.h>
#include <conio.h>

int main (){
    
    //ascii value of a char
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    printf("The ascii value of the %c variable is %d\n", ch,ch);

    //ascii value of a number
    int num;
    printf("\nenter a num : ");
    scanf("%d",&num);
    printf("ascii value of %d is %c",num,num);
}