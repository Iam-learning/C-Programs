#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    int i=1;

    printf("Enter an integer: ");
    scanf("%d", &n);

   printf("even numbers:\n"); 


    while (i<n)
    {
       printf("%d\n",i);
       
       i=i+2;
    }
    
    return 0;
}
