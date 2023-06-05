#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("Enter x: ");
    long y = get_long("Enter y: ");

    double result = (float) x / (float) y;
    printf("Result: %.10f\n", result);
}