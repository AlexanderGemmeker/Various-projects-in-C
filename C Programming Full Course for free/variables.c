#include <stdio.h>

int main(void)
{
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi); // % Format Specifiers long float
    printf("The value of e is %.15lf\n", e);

/*
//________________________________________________________________________________
    float gpa = 2.5; // great point average
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("Your price is $%f\n", price);
    printf("The temperture is %f\n", temperature);
//________________________________________________________________________________

    int age = 25;
    int year = 2026;
    int quantety = 2;

    printf("You are %d years old\n", age); // %i works too (but its not a decimal)
    printf("The year is %d\n", year); // % is a Format Specifiers in C
    printf("You have ordered %d x items\n", quantety);
//________________________________________________________________________________
*/

    return 0;
}