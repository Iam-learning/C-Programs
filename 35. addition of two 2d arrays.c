#include <stdio.h>
#include <conio.h>

int main() 
{
    
    int a[3][3],b[3][3],sum[3][3];

    printf("Enter 3x3 integers for array a:\n");
    for (int i = 0; i < 3; i++)
        for(int j=0; j<3;j++)
            scanf("%d", &a[i][j]);

    printf("Enter 3x3 integers for array b:\n");
    for (int i = 0; i < 3; i++)
     for(int j=0; j<3;j++)
        scanf("%d", &b[i][j]);
    
    printf("sum of array a and b:\n");
    for (int i = 0; i < 3; i++){
        for(int j=0; j<3;j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
    }
    return 0;
}