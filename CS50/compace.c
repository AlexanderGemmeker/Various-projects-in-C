#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

char *s = get_string("s: ");
char *t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);

    /*
    string s = get_string("s: ");
    string t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

//
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
*/
}
