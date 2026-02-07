#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct 
{
    char title[MAX_SIZE];
    char author[MAX_SIZE];
    float cost_in_usd;
} Book;


int main(void)
{
    Book library[] =
        {
            {
                "Harry Potter and the Socerer's Stone",
                "Joanne Kathleen Rowling",
                13.89
            },
            {
                "Harry Potter and the Chamber of Secrets",
                "Joanne Kathleen Rowling",
                14.89
            },
        };

    for (int i = 0; i < sizeof(library) / sizeof(library[0]); i++)
    {
        printf("Title: %s\nAuthor: %s\nCost: $%.2f\n\n",
               library[i].title,
               library[i].author,
               library[i].cost_in_usd);

    }
    return 0;
}