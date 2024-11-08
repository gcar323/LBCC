#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Gabriel Carrera Rosas (Lab 4)

    int max, random, currentGuess, guessCount = 0;
    printf("Welcome to the Random Number Guessing Game! ");
    printf("Enter a number greater than 100: ");
    scanf("%d", &max);

    srand(time(0));
    random = (rand() % max) + 1;
    printf("I generated a number between 1 and %d.\n" , max);
    printf("Now guess the number!\n\n");

    while (currentGuess != random) {
        printf("Enter a guess: ");
        scanf("%d", &currentGuess);
        guessCount++;


        if (currentGuess < random) { printf("Current guess is less than the random number. ");}
        else if (currentGuess > random) { printf("Current guess is greater than random number. ");}
        else if (currentGuess == random) { printf("You guessed the random number!\nYou guessed a total of %d tries!\n", guessCount);}
    }
    printf("Thank you for playing.\n");
    printf("Author: Gabriel Carrera Rosas");
    return 0;
}