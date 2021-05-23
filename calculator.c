#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,op;

    printf("\n1: Add");
    printf("\n2: Subtract");
    printf("\n3: Multiply");
    printf("\n4: Divide");
    
    printf("\nSelect a operation: ");
    scanf("%d", &op);

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
   
   if(op==1){
      
       //add
       c=a+b;
       printf("The sum of %d and %d is %d ", a,b,c);
   
   }
   else{
       if(op==2){
       
        //sub
        c=a-b;
        printf("The subtraction of %d and %d is %d ", a,b,c);

       }
       else{
           
           if(op==3){
           
               //multi
                c=a*b;
                printf("The multiplication of %d and %d is %d ", a,b,c);
           
           }
           else{
           
               if(op==4){
           
                //divide
                c=a/b;
                printf("The division of %d and %d is %d ", a,b,c);
           
               }
               else{
           
                   printf("Not a valid operation");
           
               }
           }
       }
   }

    return 0;
}
