#include <stdio.h>
#include <conio.h>

int main() 
{
    
    int a[5],b[5],sum[5];

    printf("Enter 5 integers for array a:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter 5 integers for array b:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    
    printf("sum of array a and b:\n");
    for (int i = 0; i < 5; i++){
        sum[i] = a[i] + b[i];
        printf("%d ", sum[i]);
    }
    return 0;
}