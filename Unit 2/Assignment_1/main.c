#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Assignment 1\n");
    printf("Homework1\n\n");
    printf("EX1:-\n\n");
    printf("C programming\n");

    printf("\n=================================================================================\n\n");

    printf("EX2:-\n\n");
    int number;
    printf("Enter an integer : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&number);
    printf("You entered : %d\n",number);

    printf("\n=================================================================================\n\n");

    printf("EX3:-\n\n");
    int num1, num2;
    printf("Enter two numbers : ");
    fflush(stdin); fflush(stdout);
    scanf("%d%d",&num1, &num2);
    printf("Sum : %d\n",(num1+num2));

    printf("\n=================================================================================\n\n");

    printf("EX4:-\n\n");
    float f_num1, f_num2;
    printf("Enter two numbers : ");
    fflush(stdin); fflush(stdout);
    scanf("%f%f",&f_num1, &f_num2);
    printf("Product : %f\n",(f_num1*f_num2));

    printf("\n=================================================================================\n\n");

    printf("EX5:-\n\n");
    char c;
    printf("Enter a character : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c is : %d\n",c, c);

    printf("\n=================================================================================\n\n");

    printf("EX6:-\n\n");
    int a, b, temp;
    printf("Enter two numbers : ");
    fflush(stdin); fflush(stdout);
    scanf("%d%d",&a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %d\n",a);
    printf("After swapping, value of b = %d\n",b);

    printf("\n=================================================================================\n\n");

    printf("EX7:-\n\n");
    int _a, _b;
    printf("Enter two numbers : ");
    fflush(stdin); fflush(stdout);
    scanf("%d%d",&_a, &_b);
    _a = _a + _b;
    _b = _a - _b;
    _a = _a - _b;
    printf("After swapping, value of a = %d\n",_a);
    printf("After swapping, value of b = %d\n",_b);

    return 0;
}
