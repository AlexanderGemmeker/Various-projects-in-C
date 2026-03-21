#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: "); // "string s" with cs50
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s); // destination, source
/*
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
*/
    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s),
    printf("t: %s\n", t);
/*
    char *t = s; // "string t" with cs50

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
*/
    free(t);
}
