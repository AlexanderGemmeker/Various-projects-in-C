#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2]; // Strings are arrays
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[0][0], words[0][1], words[0][2], words[0][3]);

/*
    printf("%s\n", words[0]);
    printf("%s\n", words[1]);

    string s = "HI!";
    string t = "BYE!";

    printf("%c%c%c\n", s[0], s[2], s[2]); // %s works too
    printf("%c%c%c%c\n", t[0], t[1], t[2], t[3]); // %s works too

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    printf("%s\n", s);

    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
*/
}
