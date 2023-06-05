#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("while meow #%i\n", i + 1);
        i++;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("for meow #%i\n", j + 1);
    }

    while (1)
    {   
        printf("press 'control + C' to kill the program\n");
    }
}
