// exchange or bubble sort
#include <stdio.h>
#include <conio.h>

int main() 
{
    
    int a[5],b[5],t;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    
    t=0;
    for(int j=0; j< 4; j++){

        for (int i = 0; i < 4; i++){
        
            if(a[i]>a[i+1]){
                
                t = a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            
            }
        }
    }

    printf("sorted array: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    
    return 0;
}