// program to find roots of a quadratic equation
// roots of quad eq ax^2 + bx + c = 0 are given by x = -b 

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){

    double a, b, c, discriminant, root1, root2, root3, realPart, imagPart;

    printf("enter coefficients of a,b,c: ");
    scanf(" %lf %lf %lf", &a,&b,&c);

    discriminant = b*b -4*a*c;

    if(discriminant>0){
        root1 = ( -b + sqrt(discriminant)) / (2 * a);
        root2 = ( -b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
    }
    else if(discriminant==0){
        root1 = -b/(2*a);
        printf("root1 = root2 = %.2lf",root1);
    }
    else{
        realPart = -b / (2 * a);
        imagPart = sqrt(discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi",realPart,imagPart,realPart,imagPart);
    }

    return 0;
}

// example equation:
// enter coefficients of a,b,c: 2 -9 4
// root1 = 4.00 and root2 = 0.50