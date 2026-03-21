// Averages three numbers using an array, a constant, and a helper function

#include <cs50.h>
#include <stdio.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
/*
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    int scores[3]; // An array
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    float score1 = 72; // Could be int
    float score2 = 73; // Could be int
    float score3 = 33; // Could be int

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3); // 3.0 for a float, or (float)
*/
