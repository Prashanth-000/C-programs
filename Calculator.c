#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,r=0;
    char op;

    printf("WELLCOME\n");
    printf("START YOUR CALCULATIONS!...\n\n");
    printf("Enter first number\n");
    scanf("%f",&a);
    printf("Enter second number\n");
    scanf("%f",&b);
    printf("Enter the operator(+ - * /)\n");
    scanf("%s",&op);

    switch (op)  //Check for desired operations.
    {
    case '+':
        r=a+b;
        break;
    case '-':
        r=a-b;
        break;
    case '*':
        r=a*b;
        break;
    case '/':
        r=a/b;
        break;
    
    default:printf("Invalid operator\n");
        return 0;
    }
    printf("Result is\n");
    printf("%.2f",r);
    return 0;
    
}