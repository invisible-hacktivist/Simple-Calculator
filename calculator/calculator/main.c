#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, choice;
    printf("**********DIGITAL CALCULATOR**********");
    printf("\nBy DSE-01-8285/2021\ ");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Quotient\n5.Modulus\n");
    printf("Select your operation: ");
    scanf("%d",&choice);
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);

    switch (choice)
    {
    case 1:
        printf("%d + %d = %d ",a,b,a+b);
        break;

    case 2:
        printf("%d - %d = %d ",a,b,a-b);
        break;

        case 3:
        printf("%d x %d = %d ",a,b,a*b);
        break;

        case 4:
        printf("%d / %d = %d\n ",a,b,a/b);
        break;

        case 5:
        printf("(%d) % (%d) = %d ",a,b,a%b);
        break;
    }




    return 0;
}
