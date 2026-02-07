#include <stdio.h>

int main(void)
{
    const int SPECIAL_NUMBER = 10;
    int user_choice = 0;

    printf("Choose your number: ");
    scanf("%d", &user_choice);

    if (user_choice > SPECIAL_NUMBER)
    {
        printf("%d is bigger than %d\n", user_choice, SPECIAL_NUMBER);
    }
    else 
    {
        printf("%d is not bigger than %d\n", user_choice, SPECIAL_NUMBER);
    } 

    return 0;
}