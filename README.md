# 🧩 Word Scramble Game (C Language)

This is a simple **Word Scramble Game** written in **C**, where the player must unscramble a randomly shuffled word.  
The game uses the **Fisher–Yates shuffle algorithm** to scramble the letters.

---

## ⭐ Features
- Random word selection  
- Words scrambled using Fisher–Yates algorithm  
- Unlimited guessing attempts  
- Tracks number of attempts  
- Beginner-friendly C project  

---

## 🖥️ How the Game Works
1. The program loads a list of predefined words.  
2. It selects **one random word**.  
3. The word is scrambled using a random shuffle.  
4. The scrambled word is shown to the player.  
5. The player keeps guessing until the correct word is entered.  
6. The program shows the number of attempts and ends.

---

## 📌 Code Overview

### **Scramble Function**
The `scramble()` function:
- Copies the original word  
- Applies the Fisher–Yates shuffle  
- Swaps letters randomly  

### **Main Function**
- Loads word list  
- Picks random word  
- Calls `scramble()`  
- Loops until the user guesses correctly  

---

## 🚀 How to Compile and Run

### **Using GCC**
```bash
gcc scramble.c -o scramble
./scramble


gcc scramble.c -o scramble.exe
scramble.exe

********  WORD SCRAMBLE GAME  ********
Unscramble the word: mreargop

Enter your guess: program
Correct! 🎉
You guessed the word in 2 attempts.

Thanks for playing!

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
