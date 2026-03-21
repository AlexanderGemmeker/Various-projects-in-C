// Preprocessing step
// string get_string(string prompt);
#include <cs50.h>
// int printf(string format, ...);
#include <stdio.h>

// Prototype
// void meow(void);

int main(void)
{
    string name = get_string("What´s your name? ");
    printf("hello, %s\n, name");
}

// Compiling into assembly code
// Assembly code into mashine code
// Linking hello.c + cs50.c + stdio.c