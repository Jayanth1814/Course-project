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

## Functions Used in a Word Scramble Game 

1. load_words()

Loads all words from a file or array.

Stores them into a list for the game.


2. choose_word()

Randomly picks a word from the list of words.


3. scramble_word()

Takes a word and shuffles its characters.

Returns a scrambled version of the word.


4. play_game()

Displays the scrambled word.

Accepts user's guess.

Checks if the guess is correct.

Shows score or result.


5. main()

Calls all functions.

Controls the overall flow of the program.
 

---

## 🚀 How to run the program

### **Using GCC**
```bash
gcc scramble.c -o scramble
./scramble
```
### 2 Run 

** Windows **
```bash
gcc scramble.c -o scramble.exe
scramble.exe
```
### 3 Data Files

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
