#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Function to scramble the letters of the word
void scramble(char word[], char scrambled[]) {
    int length = strlen(word);
    strcpy(scrambled, word);

    // Fisher–Yates shuffle
    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        // swap characters
        char temp = scrambled[i];
        scrambled[i] = scrambled[j];
        scrambled[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    // List of words
    char words[][20] = {"computer", "program", "language", "keyboard", "internet", "science", "player", "mobile"};
    int totalWords = sizeof(words) / sizeof(words[0]);

    // Choose a random word
    char original[20], scrambled[20];
    strcpy(original, words[rand() % totalWords]);

    // Scramble it
    scramble(original, scrambled);

    printf("\n\n********  WORD SCRAMBLE GAME  ********\n");
    printf("Unscramble the word: %s\n", scrambled);

    char guess[20];
    int attempts = 0;

    // Game Loop
    while (1) {
        printf("Enter your guess: ");
        scanf("%s", guess);
        attempts++;

        if (strcmp(guess, original) == 0) {
            printf("\nCorrect! 🎉\n");
            printf("You guessed the word in %d attempts.\n", attempts);
            break;
        } else {
            printf("Wrong! Try again.\n");
        }
    }

    printf("\nThanks for playing!\n");

return 0;
}