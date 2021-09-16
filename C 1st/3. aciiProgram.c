#include <stdio.h>  
int main()  
{  
    // // To print ascii value of a character
    // char ch;
    // printf("Enter a character : ");  
    // scanf("%c",&ch);

    // printf("\n The ascii value of the %c variable is %d", ch,ch);  
    
    // return 0;  

    //To print ascii table

    for (int i=48; i<=255; i++){
        printf("The ASCII value of %c is %d\n",i,i);
    }
}  

// input char , check capital letter, small letter
//if small then print in capital or vise versa