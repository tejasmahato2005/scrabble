# Scrabble Game in C

## Description
This program is simple scrabble-like game in C.
It prompts two players to each enter a word, calculates the scrabble score for each word based on the standard letter points, and then declares the winner (or a tie)

The scoring is based on the following point values:

| Letters(s)    | Points |
| --------------|--------|
A,E,I,O,U,L,N,S,T,R | 1 |
| D,G           | 2 |
|B,C,M,P        | 3 |
| F, H, V, W, Y | 4 |
|K              | 5 |
|J, X           | 8 |
|Q,Z            | 10 |

---

## How it works
1. Player 1 enters a word.
2. Player 2 enters a word.
3. The program calculates the score for each word by summing the values of each letter (case-insensitive).
4. It prints:
   - **"Player 1 wins!"** if Player 1’s score is higher.
   - **"Player 2 wins!"** if Player 2’s score is higher.
   - **"Tie!"** if both scores are equal.

---


