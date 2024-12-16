#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 40;
    int guess = 0;
    int guesses = 7;
    int answer = 0;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    printf("*********\n");
    printf("Welcome to the number guessing game\n");
    printf("You need to guess the number between 1 and 40 before you run out of 7 lives\n");
    printf("Good luck...\n");
    printf("*********\n");

    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        
        if (guess > answer) {
            printf("Please enter a lower value...\n");
        } else if (guess < answer) {
            printf("Please enter a higher value...\n");
        } else {
            printf("Congratulations\n");
            break;
        }
        
        guesses--;
        printf("Lives left: %d\n", guesses);

        if (guesses == 0) {
            printf("You have run out of guesses...\n");
            break;
        }
    } while (guess != answer);

    printf("**********************\n");
    printf("The correct number was: %d\n", answer);
    printf("**********************\n");

    return 0;
}

