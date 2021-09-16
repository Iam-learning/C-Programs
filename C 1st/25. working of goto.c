// array is  a collection of data items of same type
#include <stdio.h>
#include <conio.h>

int main() 
{
    
    printf("working of goto statement\n");

    goto end;

    printf("middle statement");

    end:
        printf("skipped the mid statement");
    
    return 0;
}
