#include <stdio.h>

int main(void)
{
    // arithmetic operators = + - * / % ++ --
    int x = 10; // Float for devision
    int y = 1;
    int z = 0;

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    z = x % y;

    x++; // ++increment --decrement

    // augmented assignment operators
    // x+=2; // x = x + 2
    // x-=2;
    // x*=2
    // x/=2

    printf("%d\n", z);

    return 0;
}