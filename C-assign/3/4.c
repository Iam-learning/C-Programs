// simple calculator using switch

#include <stdio.h>
#include <conio.h>

int main (){

    int a,b,n;
    int sum,sub,mul,div;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("select an operation: \n");
    printf("1 = add\n");
    printf("2 = sub\n");
    printf("3 = mul\n");
    printf("4 = div\n");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
        printf("sum=%d",a+b);
        break;

        case 2:
        printf("sub=%d",a-b);
        break;
        
        case 3:
        printf("mul=%d",a*b);
        break;
        
        case 4:
        printf("div=%d",a/b);
        break;
    
        default:
        printf("invalid operation");
        break;
    }


    return 0;
}

// a better program
// Program to create a simple calculator
// #include <stdio.h>

// int main() {
//     char operator;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operator);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(operator)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         // operator doesn't match any case constant +, -, *, /
//         default:
//             printf("Error! operator is not correct");
//     }

//     return 0;
// }
