 #include <stdio.h>  
 #include <conio.h>

int main()  
{ 
 char ch; 
    printf("Enter a character:");
 
    scanf("%c",&ch);
 
    if(ch>=65){
        if(ch<=90){
            printf("upper case");
        }
        else{
            printf("lower case");

        }
    }
 
    else{
        if(ch>=97){
            if(ch<=122){
                printf("lower case");
            }
            else{
                printf("Upper case");
            }
        }
        else{
             printf("Invalid input");
        }
 
    } 
 

 
     
    
}

// A = 65
// a =97