#include <stdio.h>
#include <stdlib.h>

int isPrime(int a);
void isPrimeInterval(int s, int e);
int factorial(int number);
void print_reverse_string(char str[]);
int power(int base, int power);

int main()
{

    printf("\t\t\t\t\t\t\tAssignment 4\n");
    /*
    printf("EX1:-\n\n");
    int start, end;
    printf("Enter two numbers(intervals) : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d%d",&start ,&end);
    //isPrime(start)? printf("Not Prime\n"):printf("Prime\n");
    isPrimeInterval(start, end);

    printf("EX2:-\n\n");
    int number;
    printf("Enter number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&number);
    printf("Factorial of %d = %d\n",number, factorial(number));

    printf("EX3:-\n\n");
    char str[50];
    printf("Enter string : ");
    fflush(stdin);  fflush(stdout);
    gets(str);
    print_reverse_string(str);
    printf("\n");

    printf("EX4:-\n\n");
    int base, _power;
    fflush(stdin);  fflush(stdout);
    scanf("%d^%d",&base, &_power);
    printf("= %d\n",power(base,_power));
    */

    return 0;
}

int isPrime(int number)
{
    int i;
    if(number < 2)
        return 1;
    for(i = 2; i < number; i++)
    {
        if(number % i == 0) //12/2 12/3 12/4 12/5
            return 1;
    }
    return 0;
}

void isPrimeInterval(int s, int e)
{
    int i;
    for(i = s; i <= e; i++)
    {
        if(isPrime(i));
        else
        {
            printf("%d\t",i);
        }
    }
}

int factorial(int number)
{
    int fact;
    if(number == 0)
        return 1;
    fact = number*factorial(number-1);
    return fact;
}

void print_reverse_string(char str[])
{
    if(*str == '\0')
        return;
    print_reverse_string(str+1);
    printf("%c",*str);
}

int power(int base, int _power)
{
    if(_power == 0)
        return 1;
    return base*power(base,_power-1);

}
