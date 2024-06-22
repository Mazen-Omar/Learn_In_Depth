#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\t\t\t\t\t\tAssignment 3\n");
    /*printf("EX1:-\n\n");

    int a[2][2];
    int b[2][2];
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d]: ",i+,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter b[%d][%d]: ",i+1,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum Of Matrix : \n");
    for(i = 0; i < 2; i++)
    {
        for(j =0; j < 2; j++)
        {
            printf("%d\t",(a[i][j]+b[i][j]));
        }
        printf("\n");
    }
       /*
    printf("EX2:-\n\n");
    const int length;
    int i;
    printf("Enter the numbers of data: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&length);
    float numbers[length], sum = 0;
    for(i = 0; i < length; i++)
    {
        printf("Enter number : ");
        fflush(stdin);  fflush(stdout);
        scanf("%f",numbers+i);
    }
    for(i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    printf("Average = %f\n",(sum/length));


    printf("EX3:-\n\n");
    int row, column, i, j;
    printf("Enter row and column of matrix :");
    fflush(stdin);  fflush(stdout);
    scanf("%d%d",&row,&column);
    int a[row][column], b[column][row];
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("Enter a[%d][%d]: ",i+1,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of Matrix : \n");
    for(i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("EX4:-\n\n");
    int length, i, j = 0, inserted_element, location;
    printf("Enter number of elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&length);
    int arr1[length], arr2[length++];
    for(i = 0; i < length-1; i++)
    {
        fflush(stdin);  fflush(stdout);
        scanf("%d",arr1+i);
    }
    printf("Enter the element to be inserted : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&inserted_element);
    printf("Enter the location : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&location);

    for(i = 0; i < length; i++)
    {
        if(i == (location-1))
        {
            arr2[i] = inserted_element;
        }
        else
        {
            arr2[i] = arr1[j++];
        }
    }
    for(i = 0; i < length; i++)
    {
        printf("%d\t",arr2[i]);
    }

    printf("EX5:-\n\n");
    int M_index = 0, S_index = 0, E_index;
    int length, i, target, flag = 0;
    printf("Enter number of elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&length);
    int data[length];
    for(i = 0; i < length; i++)
    {
        fflush(stdin);  fflush(stdout);
        scanf("%d",data+i);
    }
    printf("Enter the element to be searched : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&target);
    E_index = length;
    while(S_index <= E_index)
    {
        M_index = S_index +((E_index - S_index)/2);
        if(data[M_index] == target)
        {
            flag = 1;
            break;
        }
        else if(data[M_index] < target)
        {
            S_index = M_index + 1;
        }
        else
        {
            E_index = M_index - 1;
        }
    }
    if(flag == 1)
    {
        printf("Number found at the location = %d\n",M_index+1);
    }
    else
    {
        printf("Not Founded!\n");
    }


    printf("Strings\n");
    printf("EX1:-\n\n");
    int i, counter = 0;
    char sente[50], character;
    printf("Enter a string : ");
    fflush(stdin);  fflush(stdout);
    gets(sente);
    printf("Enter a character to find frequency : ");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&character);
    for(i = 0; i < 50; i++)
    {
        if(character == sente[i])
            counter++;
    }
    printf("frequency of %c = %d\n",character, counter);


    printf("EX2:-\n\n");
    int i = 0, length = 0;
    char sente[50];
    printf("Enter a string : ");
    fflush(stdin);  fflush(stdout);
    gets(sente);
    while(sente[i++] != '\0')
    {
        length++;
    }
    printf("length of string : %d\n",length);


    printf("EX3:-\n\n");
    int i, j;
    char sente[50], reverse[50];
    printf("Enter a string : ");
    fflush(stdin);  fflush(stdout);
    gets(sente);

    j = strlen(sente) - 1;
    for(i = 0; i < 50; i++)
    {
        reverse[i] = sente[j--];
    }
    printf("Reverse string is : %s\n",reverse);

    */
    return 0;
}
