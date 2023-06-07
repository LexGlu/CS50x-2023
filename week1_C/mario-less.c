#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Enter height of pyramid (from 1 to 8 incl.): ");
    }
    while (height > 8 || height < 1);

    // printf("Height: %i\n", height);

    const char c = '#';
    const char space = ' ';

    // outer loop is responsible for printing rows
    for (int i = 0; i < height; i++)
    {
        // first inner loop responsible for printing spaces inside each row
        for (int j = height - i; j > 1; j--)
        {
            printf("%c", space);
        }

        // second inner loop responsible for printing '#' inside each row
        for (int k = 0; k < i + 1 ; k++)
        {
            printf("%c", c);
        }

        // "\n" needed to leap on next row
        printf("\n");
    }

}