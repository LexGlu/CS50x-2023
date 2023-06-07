#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start_pop;
    do
    {
        start_pop = get_int("Enter positive number of starting llamas population size (not less than 9): ");
    }
    while (start_pop < 9);

    // TODO: Prompt for end size

    int end_pop;
    do
    {
        end_pop = get_int("Enter positive number of ending llamas population (not less than starting population): ");
        if (end_pop < start_pop)
        {
            printf("Ending population must be not less than starting population (%i)\n", start_pop);
        }
    }
    while (end_pop < start_pop);

    // TODO: Calculate number of years until we reach threshold

    int n = 0;
    int size = start_pop;

    while (size < end_pop)
    {
        int birth = size / 3;
        int death = size / 4;
        size += birth - death;
        n++;
    }

    // TODO: Print number of years
    printf("Number of years to achieve population of %i llamas starting from %i llamas is - %i years\n", end_pop, start_pop, n);
}
