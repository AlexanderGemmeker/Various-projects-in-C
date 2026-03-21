#include <cs50.h>
#include <stdio.h>

//Prototype
void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}

/*
// Third variant
int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("%i #\n", i);
    }
}

// Second variant
int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
}

// First variant
int main(void)
{
    string name = get_string("What`s your name? ");
    printf("hello, %s\n", name);
}
*/