#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //Code for generating random number
    srand(time(0));
    int randomNumber=(rand()%100 + 1);

    //Code for game
    int guessed, flag=0;
    printf("Number Guessing Game\n\n\n");

    for (int i=1; i<=10; i++)
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed);

        if(guessed==randomNumber)
        {
            printf(" You guessed the correct number in %d attempts\n", i);
            flag=1;
            break;
        }

        else if (guessed<randomNumber)
        {
            printf("Higher number please!\n\n");
        }

        else if (guessed>randomNumber)
        {
            printf("Lower number please!\n\n");
        }
    }
    
    if (flag==0)
    {
        printf("You failed all the 10 attempts");
    }

    return 0;
}
