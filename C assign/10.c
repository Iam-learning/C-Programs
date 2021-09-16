// swapping 2 nums using a temp variable

#include<stdio.h>

int main() {
   int a, b, temp;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &a, &b);
   printf("Before swapping x=%d, y=%d ", a, b);
    
   temp = a;
   a = b;
   b = temp;
   printf("After swapping x=%d, b=%d", a, b);
   return 0; 
}