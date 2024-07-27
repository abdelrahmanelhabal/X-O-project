# Tic-Tac-Toe Game

Welcome to the Tic-Tac-Toe game! This is a simple console-based implementation of the classic Tic-Tac-Toe game where two players can play against each other.

## Table of Contents
- [Instructions](#instructions)
- [Compilation and Execution](#compilation-and-execution)
- [Game Rules](#game-rules)

## Instructions

1. To play the game, each player will take turns to input a location on the board where they want to place their mark (X or O).
2. The board is numbered from 0 to 8, corresponding to each cell on the 3x3 grid:
    ```
     0 | 1 | 2
    -----------
     3 | 4 | 5
    -----------
     6 | 7 | 8
    ```
3. Before the game starts, both players will choose their mark (X or O).
4. Enter your moves by specifying the number corresponding to the cell where you want to place your mark.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Make sure you have a C++ compiler installed on your system (e.g., g++).

2. Save the code in a file called `tic_tac_toe.cpp`.

3. Open a terminal or command prompt and navigate to the directory where `tic_tac_toe.cpp` is saved.

4. Compile the program using the following command:
    ```
    g++ -o tic_tac_toe tic_tac_toe.cpp
    ```

5. Run the compiled program:
    ```
    ./tic_tac_toe
    ```

## Game Rules

1. The game is played on a 3x3 grid.
2. Player 1 and Player 2 take turns to place their marks (X or O) in an empty cell.
3. The first player to get three of their marks in a row (vertically, horizontally, or diagonally) wins the game.
4. If all cells are filled and no player has three marks in a row, the game is a draw.

## Code Explanation

The program consists of several functions:

- `steal()`: Displays the welcome message and instructions for the game.
- `display_board()`: Displays the current state of the game board.
- `enter(int sq)`: Maps the user input to the corresponding row and column on the board.
- `game()`: Manages the game loop, allowing players to take turns and checking for win conditions.

The `main()` function initializes the game by calling the `steal()`, `display_board()`, and `game()` functions.

This project was developed by [Abdelrahman Elhabal].
