// program to check char is vowel or consonant

#include <stdio.h>
#include <conio.h>

int main (){

    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("enter a char: ");
    scanf("%c",&c);

    lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercase_vowel = (c=='A' || c=='E' || c=='C' || c=='I' || c=='O');

    if( uppercase_vowel || lowercase_vowel ){
        printf("%c is a vowel",c);
    }
    else{
        printf("%c is a consonant",c);
    }
 
    return 0;
}