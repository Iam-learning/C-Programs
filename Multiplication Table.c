// wap to generate table of a number using while

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    int m=1,i=1,limit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter a table limit: ");
    scanf("%d", &limit);

    while (i<=limit)
    {
       printf("%d X %d = %d\n",n,i,m);
       
       i=i+1;
       m=n*i;
    }
    
    return 0;
}
