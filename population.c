#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promting the user for a starting # of llama
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Promting them for an ending number of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // How many years it will take to get to the goal?
    int years = 0;
    while (start < end)
    {
        start += start / 3;
        start += start / 4;
        years++;
    }

    printf("Years: %i\n", years);
    // Every year, 1/3 of our current llamas are born; 1/4 pass away
}