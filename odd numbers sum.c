// wap to find sum of odd numbers from 1-n using while statement

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    int odd=0,i=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i<n)
    {
       if(i%2!=0)
        {
        // printf("%d\n",i);
        odd=odd+i;
        i=i+2;
        }
    }
    printf("Sum of all odd numbers is: %d", odd);
    return 0;
}
