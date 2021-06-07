#include <stdio.h>
#include <conio.h>

int main() 
{
    int n ,a[20],count=0,find;
    
    printf("Enter the length of array:");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("enter element to be searched: ");
    scanf("%d", &find);

    for (int i = 0; i < 5; i++)
    {
        if (find==a[i])
        {
            printf("found %d at index %d\n",find,i);
            count++;
        }
        
    }

    printf("%d occured %d times in the array.", find,count);

    return 0;
}