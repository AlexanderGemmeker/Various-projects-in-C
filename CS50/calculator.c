#include <cs50.h>
#include <stdio.h>

// 19 January 2038 we will overflow a 32bit counter (1970)
// Devided (truncation, must be floating point || floating-point imprecision)
int main(void)
{
    float x = get_int("What´s x? ");
    float y = get_int("What´s y? ");

    printf("%f\n", x / y);
}

/*
// Instead of "int" just "long", it has 64bit
long main(void)
{
    int dollars = 1;
    while(true)
    {
        char c = get_char("Here`s $%li. Double it and give to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}

//Multiplication
int main(void)
{
    int x = get_int("What´s x? ");

    printf("%i\n", x * 2);
}

// Addidion
int main(void)
{
    int x = get_int("What´s x? ");
    int y = get_int("What´s y? ");

    printf("%i\n", x + y);
}
*/
