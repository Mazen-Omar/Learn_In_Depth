#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int is_pwr_3(int numbe);
int convert_number_StrToInt(char number[]);

int main()
{
    /*printf("Q2:-\n\n");
    int i, A_length = 0, B_length = 0, temp_length;
    printf("Enter A & B length : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d%d",&A_length, &B_length);

    if(A_length >= B_length)
        temp_length = A_length;
    else
        temp_length = B_length;

    int A[temp_length], B[temp_length], temp[temp_length];
    for(i = 0; i < A_length; i++)
    {
        printf("Enter A%d : ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%d",A+i);
    }
    printf("\n");
    for(i = 0; i < B_length; i++)
    {
        printf("Enter B%d : ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%d",B+i);
    }

    if(A_length>= B_length)
    {
        for(i = 0; i < A_length; i++)
        {
            temp[i] = A[i];
            A[i] = B[i];
            B[i] = temp[i];
        }
        printf("A after swapping : ");
        for(i = 0; i < B_length; i++)
        {
            printf("%d\t",A[i]);
        }
        printf("\nB after swapping : ");
        for(i = 0; i < A_length; i++)
        {
        printf("%d\t",B[i]);
        }
    }
    else
    {
        for(i = 0; i < B_length; i++)
        {
            temp[i] = B[i];
            B[i] = A[i];
            A[i] = temp[i];
        }
        for(i = 0; i < B_length; i++)
        {
            printf("%d\t",A[i]);

        }
        printf("\nB after swapping : ");
        for(i = 0; i < A_length; i++)
        {
            printf("%d\t",B[i]);
        }
    }


    printf("Q6:-\n\n");
    int num;
    printf("Enter number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&num);
    printf("The fourth LSB value = %d\n",(num>>3)&1);
    printf("Q3:-\n\n");
    int length = 0, i = 0, j;
    printf("Enter number of elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&length);
    int arr[length], temp;
    j= length-1;
    for(i = 0; i < length; i++)
    {
        printf("Enter arr%d : ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%d",arr+i);
    }
    i = 0;
    while(i<j)
    {
        printf("Entered the loop\n");
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;    j--;
    }
    printf("After reverseing: ");
    for(i = 0; i < length; i++)
    {
        printf("%d\t",arr[i]);
    }


    printf("Q5:-\n\n");
    int numb, bit_pos;
    printf("Enter a number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&numb);
    printf("Enter bit position : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&bit_pos);
    printf("Result = %d\n",(numb & ~(1<<(bit_pos-1))));


    printf("Q8:-\n\n");
    int i, length = 0, foc = -1, elem;
    printf("Enter number of elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&length);
    printf("Enter the number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&elem);
    int arr[length];
    for(i = 0; i < length; i++)
    {
        printf("Enter arr%d : ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%d",arr+i);
        if(arr[i] == elem)
            foc = i;
    }
    printf("The last occurence = %d\n",foc);

    printf("Q1:-\n\n");
    char data[50], username[50];
    printf("Enter the username: ");
    fflush(stdin);  fflush(stdout);
    gets(username);
    printf("Enter : ");
    fflush(stdin);  fflush(stdout);
    gets(data);
    if(strcmp(data,username) == 0)
        printf("True\n");
    else
        printf("False\n");


    printf("Q7:-\n\n");
    int numbe;
    printf("Enter a number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&numbe);
    is_pwr_3(numbe) ? printf("%d is not a power of 3\n",numbe):printf("%d is  a power of 3\n",numbe);
    */
    printf("Q4:-\n\n");
    char number[10];
    int number_int = 0, i = 0, j;
    printf("Enter a number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%s",&number);
    printf("Number = %d\n",convert_number_StrToInt(number));
    return 0;
}

int convert_number_StrToInt(char number[])
{
   int number_int = 0, i = 0, j;
   j = strlen(number)-1;
    while(i+1<=strlen(number))
    {
        int temp = pow(10,j--) * (number[i++]-0x30);
        number_int = number_int + temp;
    }
    return number_int;
}

int is_pwr_3(int numbe)
{
    if(numbe < 3)
        return 1;
    int reminder = numbe % 3;
    while(reminder == 0)
    {
        numbe = numbe / 3;
        reminder = numbe % 3;
    }
    return !(numbe == 1);
}
