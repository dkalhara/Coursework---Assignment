#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("Welcome to the Guess the Number game!\n");
    printf("\nI have chosen a number between 1 and 100. \n\nCan you guess it?\n\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }
    }

    return 0;
}
