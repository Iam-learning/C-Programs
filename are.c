#include <stdio.h>
#include <conio.h>

int r, result;
void main() 
{
int area(int);    

    printf("Enter Radius of Circle: "); 
    scanf("%d", &r);

    result = area(r);
    printf("%d", result);

}

int area(int r){
    
    int a = 3.14 * r * r;
    printf("Radius of Circle is: %d", a);
    return a;
}