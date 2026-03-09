#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string phone;
}
Person;

int main(void)
{
    // Create an array of 5 persons
    Person people[5];

    // Fill the phonebook
    people[0].name = "Alice";
    people[0].phone = "111-1111";

    people[1].name = "Bob";
    people[1].phone = "222-2222";

    people[2].name = "Charlie";
    people[2].phone = "333-3333";

    people[3].name = "David";
    people[3].phone = "444-4444";

    people[4].name = "Eve";
    people[4].phone = "555-5555";

    // Ask user for a name
    string search = get_string("Name: ");

    // Search the phonebook
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Phone: %s\n", people[i].phone);
            return 0;
        }
    }

    // If not found
    printf("Not found\n");
}
