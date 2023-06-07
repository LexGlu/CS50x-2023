#include <cs50.h>
#include <stdio.h>

void luhn(long number);
string check_card_issuer(int first_digit, int second_digit, int length);

int main(void)
{

    long number;

    do
    {
        // Prompt for card number
        number = get_long("Number: ");
    }
    // check if card number is negative int
    while (number < 0);

    // execute main script
    luhn(number);
}

void luhn(long number)
{
    long n = number;
    int length = 0;
    int sum_part1 = 0;
    int sum_part2 = 0;
    int part1 = 0;
    long divisor = 10;

    int first_digit = 0;
    int second_digit = 0;

    // loops until number is 0 (each iteration divides the number by 10)
    while (n > 0)
    {
        int digit = n % divisor;

        // assigning first and second digits
        second_digit = first_digit;
        first_digit = digit;


        if (part1)
        {
            part1 = 0;
            int product = digit * 2;

            // checking if product is more than 1 digit, then calculate sum of its individual digits
            if (product / 10)
            {
                product = 1 + product % 10;
            }

            sum_part1 += product;
        }
        else
        {
            part1 = 1;
            sum_part2 += digit;
        }
        length++;
        n /= 10;
    }

    if ((sum_part1 + sum_part2) % 10)
    {
        // Print "INVALID" if the sum of parts is not divisible by 10
        printf("INVALID\n");
    }
    else
    {
        // Call check_card_issuer function and print the result
        printf("%s", check_card_issuer(first_digit, second_digit, length));
    }
}


string check_card_issuer(int first_digit, int second_digit, int length)
{
    // return string with result message (card issuer or invalid)
    if (first_digit == 4 && (length ==  13 || length == 16))
    {
        return "VISA\n";
    }
    else if (first_digit == 3 && (second_digit == 4 || second_digit == 7) && length == 15)
    {
        return "AMEX\n";
    }
    else if (first_digit == 5 && (second_digit > 0 && second_digit < 6) && length == 16)
    {
        return "MASTERCARD\n";
    }
    else
    {
        return "INVALID\n";
    }
}
