#include <cs50.h>
#include <stdio.h>

void print_row(int n);
void pyramid(int n);

int main(void)
{
    int n = get_int("Height: ");
    pyramid(n);
}

void pyramid(int n)
{
    // Base case
    if (n <= 0)
    {
        return;
    }

    pyramid(n - 1);

    print_row(n);
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
