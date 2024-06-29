#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Assignment 1 \n");
    printf("Homework 2\n");

    printf("EX1:-\n\n");
    int x;
    printf("Enter an integer you want to check: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&x);
    if(x%2 == 0)
        printf("%d is even\n",x);
    else
        printf("%d is odd\n",x);

    printf("\n=================================================================================\n\n");

    printf("EX2:-\n\n");
    char c;
    printf("Enter alphabet : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    if(c == 'a' || c == 'A' || c == 'o' || c == 'O' || c == 'e' || c == 'E' || c == 'u' || c == 'U' || c == 'i' || c == 'I')
        printf("%c is a vowel\n",c);
    else
        printf("%c is a consonant\n",c);

    printf("\n=================================================================================\n\n");

    printf("EX3:-\n\n");
    float a, b, d;
    printf("Enter three numbers : ");
    fflush(stdin); fflush(stdout);
    scanf("%f%f%f",&a, &b, &d);
    if(a >= b && a >= d)
        printf("%f is the largest number\n",a);
    else if(b >= a && b >= d)
        printf("%f is the largest number\n",b);
    else if(d >= a && d >= b)
        printf("%f is the largest number\n",d);

    printf("\n=================================================================================\n\n");


    printf("EX4:-\n\n");
    float number;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&number);
    if(number > 0)
    {
        printf("%f is positive\n",number);
    }
    else if(number < 0)
    {
        printf("%f is negative\n",number);
    }
    else
    {
        printf("You entered zero\n");
    }

    printf("\n=================================================================================\n\n");

    printf("EX5:-\n\n");
    char character;
    printf("Enter a character :");
    fflush(stdin); fflush(stdout);
    scanf("%c",&character);
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        printf("%c is an alphabet\n",character);
    else
        printf("%c is not an alphabet\n",character);

    printf("\n=================================================================================\n\n");

    printf("EX6:-\n\n");
    int n;
    printf("Enter an integer : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    int sum = 0, i;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum : %d\n",sum);

    printf("\n=================================================================================\n\n");

    printf("EX7:-\n\n");
    int _n;
    printf("Enter an integer : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&_n);
    int j, fact = 1;
    for(j = _n; j > 0; j--)
    {
        fact*= j;
    }
    printf("Factorial of %d : %d\n",_n, fact);

    printf("\n=================================================================================\n\n");

    printf("EX8:-\n\n");
    char opera;
    float num1, num2;
    printf("Enter two operands : ");
    fflush(stdin); fflush(stdout);
    scanf("%f%f",&num1 ,&num2);
    printf("Enter the operator : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&opera);
    switch(opera)
    {
        case '+':
            printf("%f + %f = %f\n",num1, num2, (num1+num2));
        break;
        case '-':
            printf("%f - %f = %f\n",num1, num2,(num1-num2));
        break;
        case '*':
            printf("%f * %f = %f\n",num1, num2,(num1*num2));
        break;
        case '/':
            printf("%f / %f = %f\n",num1, num2,(num1/num2));
        break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}
