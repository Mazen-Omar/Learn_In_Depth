#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CIRCLE_AREA(radius) (M_PI*radius*radius)

typedef struct
{
    char student_name[50];
    short student_roll;
    float student_marks;
}student;

typedef struct
{
    float feet;
    float inch;
}british_distance;

typedef struct
{
    float real;
    float imag;
}complex;
typedef struct
{
    static int real;
    float imag;
}test;

int main()
{

    printf("EX1:-\n\n");
    student student1;
    get_student_inf(&student1);
    print_student_inf(&student1);

    printf("EX2:-\n\n");
    british_distance dist1, dist2;
    printf("Enter information for the 1st distance\n");
    printf("Enter feet : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&(dist1.feet));
    printf("Enter inch : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&(dist1.inch));

    printf("Enter information for the 2nd distance\n");
    printf("Enter feet : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&(dist2.feet));
    printf("Enter inch : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&(dist2.inch));

    add_distances(&dist1, &dist2);

    printf("EX3:-\n\n");
    complex number1, number2;
    printf("Enter the first number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f+j%f",&(number1.real), &(number1.imag));
    printf("Enter the second number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f+j%f",&(number2.real), &(number2.imag));
    add_complex(&number1, &number2);

    printf("EX4:-\n\n");
    float user_radius;
    printf("Enter the radius of the circle : ");
    scanf("%f",&user_radius);
    printf("Circle area of radius %.2f = %.3f\n", user_radius, CIRCLE_AREA(user_radius));


    return 0;
}


void get_student_inf(student* std)
{
    printf("Enter your name : ");
    fflush(stdin);  fflush(stdout);
    gets(std->student_name);
    printf("Enter roll number : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&(std->student_roll));
    printf("Enter marks : ");
    fflush(stdin);  fflush(stdout);
    scanf("%f",&(std->student_marks));
}

void print_student_inf(student* std)
{
    printf("Displaying information\n");
    printf("Name : %s\n",std->student_name);
    printf("Roll : %d\n",std->student_roll);
    printf("Marks : %f\n",std->student_marks);
}


void add_distances(british_distance* distance1, british_distance* distance2)
{
    british_distance result;
    result.feet = distance1->feet + distance2->feet;
    result.inch = distance1->inch + distance2->inch;
    if(result.inch >= 12)
    {
        (result.feet) += ((int)result.inch/12);
        result.inch -= 12;
    }
    printf("%.0f\'%.3f\" +%.3f\'%.3f\" = %.0f\'%.3f\" \n",distance1->feet, distance1->inch, distance2->feet, distance2->inch,
                                              result.feet, result.inch);
}

void add_complex(complex* n1, complex* n2)
{
    printf("%.2f+j%.2f + %.2f+j%.2f = %.2f+j%.2f\n",n1->real, n1->imag,n2->real,n2->imag
                                                         ,(n1->real + n2->real), (n1->imag + n2->imag));
}
