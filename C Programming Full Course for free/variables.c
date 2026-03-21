#include <stdio.h>

int main(void)
{
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains

    int age = 25;
    int year = 2026;
    int quantety = 1;

    printf("You are %d years old\n", age); // %i works too (but its not a decimal)
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantety);

    return 0;
}