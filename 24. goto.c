#include <stdio.h>
#include <conio.h>

int main() 
{

//############################## goto program 1: ##############################

    // label:
    //     printf("inside label\n");
    
    // goto end;

    // printf("hello\n");
    
    // goto label;

    // end:
    //     printf("at the end\n");

// ################################ goto program 2: ###############################
    int num;
    
    for (int i = 0; i < 5; i++)
    {

        printf("outer loop: %d \n",i);

        for (int j = 0; j <8; j++)
        {
            printf("Enter a number or enter 0 to exit:\n");
            scanf("%d", &num);

            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    
    end:
            printf("ended");



    return 0;
}