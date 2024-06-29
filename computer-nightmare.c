#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define START_SCORE 300
#define WINNING_SCORE 500
#define LOSING_SCORE 0

void displayInstructions() {
    printf("Computer Nightmare\n");
    printf("You are a late-night computer addict and you've fallen asleep at the keyboard.\n");
    printf("Suddenly your computer comes alive and starts hurling numbers and abuse at you.\n");
    printf("To beat it you have to match the numbers as they appear on the screen.\n");
    printf("Your starting score of %d is increased if you hit the right number and decreased if you don't.\n", START_SCORE);
    printf("If you can get your score up to %d the computer will give up and you win,\n", WINNING_SCORE);
    printf("but if it goes down to zero, you will become a slave to your computer.\n");
    printf("It's a real nightmare! Can you stay sane?\n");
}

int main() {
    int score = START_SCORE;
    int computerNumber, playerNumber;
    char playAgain;

    srand(time(0)); // Initialize random number generator

    displayInstructions();

    do {
        computerNumber = rand() % 10; // Generate a random number between 0 and 9
        printf("\nComputer: %d\n", computerNumber);
        printf("Your guess: ");
        scanf("%d", &playerNumber);

        if (playerNumber == computerNumber) {
            score += 10;
            printf("Correct! Your score: %d\n", score);
        } else {
            score -= 10;
            printf("Wrong! Your score: %d\n", score);
        }

        if (score >= WINNING_SCORE) {
            printf("Congratulations! You win!\n");
            break;
        } else if (score <= LOSING_SCORE) {
            printf("You lose! You are now a slave to your computer.\n");
            break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &playAgain); // The space before %c skips any whitespace characters

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
