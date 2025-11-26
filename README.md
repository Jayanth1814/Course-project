# 🧩 Word Scramble Game (C Language)

This is a simple **Word Scramble Game** written in **C**, where the player must unscramble a randomly shuffled word.  
The game uses the **Fisher–Yates shuffle algorithm** to scramble the letters.

---
## 📄 ABSTRACT 

A Word Scramble game is an interactive word-based puzzle in which the letters of a word are randomly rearranged, and the player must reorganize them to form the correct word. This type of game is designed to engage users in an enjoyable challenge that stimulates language comprehension and mental agility. By presenting scrambled words of varying lengths and complexities, the game encourages players to think critically and recognize familiar patterns in unfamiliar forms.

In addition to providing entertainment, Word Scramble games serve as effective educational tools. They help improve vocabulary, spelling accuracy, and cognitive skills such as memory and problem-solving. Teachers and learners often use these games to reinforce language lessons in a fun, low-pressure format. Through repeated exposure to new words and rapid decision-making, players develop both linguistic knowledge and confidence.

The implementation of a Word Scramble game can include features such as multiple difficulty levels, scoring systems, timed challenges, and hint options, all of which contribute to an engaging user experience. Whether developed as a mobile app, a web-based activity, or a classroom resource, the game offers flexibility and adaptability for diverse audiences. Overall, Word Scramble games combine learning and entertainment to provide a stimulating and rewarding experience for players of all ages.
## ⭐ FEATURES
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

## 🔧 TECHNICAL REQUIREMENTS 


---

## 💻 System Requirements

Windows / Linux / macOS

Terminal or Command Prompt

At least 4 MB RAM

Minimal disk space (only for storing the .c source file)

Keyboard for user input



---

## 🧰 Software Requirements

C Compiler: GCC / Clang / MSVC / MinGW

Code Editor / IDE:

VS Code

Code::Blocks

Dev-C++

CLion

Notepad++


Optional: make utility (for advanced compilation)
Optional: make utility (for advanced compilation)



---

## 🖥 Programming Requirements

Language: C
Standard: C89 / C99 / C11

Required Header Files:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

Key Concepts Used:

Arrays

Strings

Functions

Loops (for, while)

Conditional Statements

Random number generation (rand, srand)

String comparison & copying (strcmp, strcpy)



---

## 📁 Data Handling Requirements

No external files required

All words stored in an internal array
Uses random seed (time(NULL)) for shuffling

Efficient character swapping using Fisher–Yates shuffle



---
## ⚙ Compilation Requirements

Must compile without errors

Compatible with C89 / C99 / C11 standards

Use a standard C compiler: GCC / Clang / MSVC / MinGW

Recommended flags:
-Wall (show all warnings)
-Wextra (optional, stricter warnings)






## Functional Requirements 

## 1. User Interface

Fully terminal-based

Displays the scrambled word clearly

Accepts user guesses through keyboard input

Shows feedback for correct and incorrect guesses



---

## 2. Game Operations

Select Random Word: Picks a word from a predefined list

Scramble Word: Shuffles the letters using a random algorithm

User Guess Input: Allows the user to enter guesses

Check Answer: Compares the guess with the original word

Attempt Counter: Tracks total number of attempts made

Show Result: Displays success message and number of attempts



---

## 3. Data Management

All words stored in an internal word list (array)

Uses rand() and srand() for random operations

No external files required (lightweight and fast)

Efficient handling of string operations (copy, compare, shuffle)



---

## 4. Program Flow

Displays a welcome message and scrambled word

Repeats user input until the correct guess is entered

Shows “Wrong! Try again.” for incorrect attempts

Ends the loop when the correct word is guessed

Displays final message and total attempts

Program terminates smoothly after completion

## 5. Error Handling & Validation

Handles invalid or empty user input

Prevents program crash due to unexpected characters

Ensures scrambled word is never identical to the original word

Validates random number generation for selecting words

Displays proper error messages if input is incorrect



---







 

---

## 🚀 How to run the program

### 1.Compile the program
```bash
gcc word_scramble.c -o word_scramble
```
### 2. Run 
```bash
gcc scramble.c -o scramble.exe
scramble.exe
```
Windows 

word_scramble.exe

### 3. Data Files

The program automatically creates words.txt on the first run (if it does not exist).

All game words are loaded from this file before the game starts.

You can edit words.txt to add or remove words.

High-score or game history (if needed) can be stored in scores.txt.

Exported scrambled words (optional feature) will appear in exported_words.txt.




## ** Screenshot **

* Enter your guess
*<img width="672" height="443" alt="Screenshot 2025-11-26 201838" src="https://github.com/user-attachments/assets/00c6c676-bed9-4aa1-b8e5-d3280c1501e6" />

## Author ##
Jayanth
