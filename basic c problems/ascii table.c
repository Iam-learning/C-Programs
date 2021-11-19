#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){

    for(int i=0;i<=255;i++){
        
        if(i%24==0){
            getch();
            system("cls");
        }
        
        printf("\n%d %c",i,i);
    }


}