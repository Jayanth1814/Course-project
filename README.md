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


## ** Screenshot **

* Enter your guess
*<img width="672" height="443" alt="Screenshot 2025-11-26 201838" src="https://github.com/user-attachments/assets/00c6c676-bed9-4aa1-b8e5-d3280c1501e6" />


