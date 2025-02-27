#include <stdio.h>
#include <cs50.h>

void print_row(int length, int totalLength);

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }

    return 0;
}

void print_row(int length, int totalLength)
{
    for (int i = 0; i < totalLength - length; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < length; i++)
    {
        printf("#");
    }

    printf("\n");
}