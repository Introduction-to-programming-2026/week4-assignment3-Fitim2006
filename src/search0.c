/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    int target = get_int("Enter a number: ");

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}
