#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,d,e;

        printf("enter a: ");
        scanf("%d", &a); 
        
        printf("enter b: ");
        scanf("%d", &b); 

        printf("enter c: ");
        scanf("%d", &c); 

        printf("enter d: ");
        scanf("%d", &d); 

        printf("enter e: ");
        scanf("%d", &e); 



if (a>b){ //MAIN
    if(a>c){
        if(a>d){
            if(a>e){
                printf("a is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
        else{
            if(d>e){
                printf("d is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
    }
    else{
        if(c>d){
            if(c>e){
                printf("c is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
        else{
            if(d>e){
                printf("d is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
    }
}


else{//MAIN
    
    if(b>c){
        if(b>d){
            if(b>e){
                printf("b is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
        else{
            if(d>e){
                printf("d is the greatest");
            }
            else{
                printf("e is the greatest");
            }
        }
    }
    else{
        if(c>d){
            if(c>e){
                printf("c is the greatest");
            }
            else{ 
                printf("e is the greatest");
            }
        }    
        else{
            if(d>e){
               printf("d is the greatest");
            }
            else { 
                printf("e is the greatest");
                }
            }
        }

    }
    
    return 0;
}
