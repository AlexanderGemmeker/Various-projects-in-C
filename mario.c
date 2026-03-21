#include <stdio.h>

int main(void)
{
    // Constant
    const int n = 3;
    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print one brick
            printf("#");
        }
        printf("\n");
    }
}

/*
// Four ? above each other
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("?\n");
    }
}

// Four ? in one line
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}
*/
