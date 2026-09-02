#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, attempts = 0;
    srand(time(0));
    secret = rand() % 100 + 1;
    printf("=== Number Guessing Game ===\n");

    do
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret)
        {
            printf("Too low!\n");
        }
        else if (guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct!\n");
        }

    } while (guess != secret);

    printf("You guessed the number in %d attempts.\n", attempts);

    return 0;
}