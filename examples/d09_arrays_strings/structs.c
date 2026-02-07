#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int main(void)
{
    typedef struct 
    {
        char title[MAX_SIZE];
        char author[MAX_SIZE];
        float cost;
    } Book;

    Book my_books[2] = {
        { "Harry Potter and the Sorcerer's Stone", "Joanne Kathleen Rowling", 13.89 },
        { "Leaves of Grass", "Walt Whitman", 3.90 }
    }; 

    for (int i=0; i < 2; i++)
    {
        printf(
            "Title: %s\nAuthor: %s\nCost: $%.2f\n",
            my_books[i].title,
            my_books[i].author,
            my_books[i].cost
        );
    }
    return 0;
}


