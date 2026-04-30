#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[5] = {"Fitim", "Ernik", "Arlinda", "Mustafa", "Ema"};

    string search = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], search) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
}
