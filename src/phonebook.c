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
    Person people[5];

    people[0].name = "Fitim";
    people[0].phone = "111-1111";

    people[1].name = "Ernik";
    people[1].phone = "222-2222";

    people[2].name = "Arlinda";
    people[2].phone = "333-3333";

    people[3].name = "Mustafa";
    people[3].phone = "444-4444";

    people[4].name = "Ema";
    people[4].phone = "555-5555";

    string search = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Phone: %s\n", people[i].phone);
            return 0;
        }
    }

    printf("Not found\n");
}
