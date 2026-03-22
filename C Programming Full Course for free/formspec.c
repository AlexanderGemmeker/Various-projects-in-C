#include <stdio.h>

int main(void)
    // Format specifier = Special tokens that begin with a % symbol,
    // followed b a character that specifies the data type
    // and optional modifiers (width, precision, flags)
    // They control how data is displayed ot interpreteted.
{
    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
/*
    int age = 25;
    float price = 19.99;
    double pi = 3.1515926535;
    char currency = '$';
    char name[] = "Bro Code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%x\n", name);
*/
    return 0;
}