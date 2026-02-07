#include <stdio.h>

#define MAX_NAME  80
int main(void)
{

    typedef struct
    {
        char first_name[MAX_NAME];
        char last_name[MAX_NAME];
        unsigned int age;
    } Person;

    Person people[] = {{ "William", "Moon", 29}, { "Jane", "Doe", 11}};

    const Person * end = &people[2];

    for (Person *p = people; p < end; p++)
    {
        printf("Name: %s,%s\n", p->last_name, p->first_name);
        printf("Age:  %d\n", p->age);

    }
    return 0;
}