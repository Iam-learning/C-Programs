#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("even numbers:\n"); 


    for(i=0;i<n;i=i+2)
    {
       printf("%d\n",i);
       
    }
    
    return 0;
}
