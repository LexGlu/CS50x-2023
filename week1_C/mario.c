#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);


int main(void)
{
    // Get size of grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Enter positive integer: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    const char c = '#';
    for (int column = 0; column < size; column++)
    {
        for (int row = 0; row < size; row++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
