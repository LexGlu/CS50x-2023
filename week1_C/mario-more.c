#include <cs50.h>
#include <stdio.h>


void print_spaces(int i, int height);
void print_hashes(int i);

int main(void)
{
    int height;

    do
    {
        height = get_int("Enter height of pyramid (from 1 to 8 incl.): ");
    }
    while (height > 8 || height < 1);

    // printf("Height: %i\n", height);

    // outer loop is responsible for printing rows
    for (int i = 0; i < height; i++)
    {
        // first inner loop responsible for printing spaces inside each row
        print_spaces(i, height);

        // second inner loop responsible for printing '#' inside each row (left side)
        print_hashes(i);

        // printing 2 spaces
        printf("  ");

        // third inner loop responsible for printing '#' inside each row (right side)
        print_hashes(i);

        // "\n" needed to leap on next row
        printf("\n");
    }
}


// functions for abstraction
void print_spaces(int i, int height)
{
    // first inner loop responsible for printing spaces inside each row
    for (int j = height - i; j > 1; j--)
    {
        printf(" ");
    }
}

void print_hashes(int i)
{
    for (int k = 0; k < i + 1 ; k++)
    {
        printf("#");
    }
}
