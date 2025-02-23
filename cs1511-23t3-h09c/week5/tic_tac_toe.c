#include <stdio.h>

#define SIZE 5

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {

    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };
    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };
    char diagO1[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };
    char diagX2[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', 'X', ' '},
        {' ', 'X', 'X', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', x_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', diagO1)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', diagO1)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', diagX2)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', diagX2)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // diagonal top left to bottom right
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (board[i][i] == player) {
            count++;
        }
    }
    if (count == SIZE) {
        return 1;
    }

    // diagonal bottom right to top left
    count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (board[SIZE - i - 1][i] == player) {
            count++;
        }
    }
    if (count == SIZE) {
        return 1;
    }

    // full row
    for (int j = 0; j < SIZE; j++) {
        count = 0;
        for (int i = 0; i < SIZE; i++) {
            if (board[i][j] == player) {
                count++;
            }
        }
        if (count == SIZE) {
            return 1;
        }
    }

    // full col
    for (int j = 0; j < SIZE; j++) {
        count = 0;
        for (int i = 0; i < SIZE; i++) {
            if (board[j][i] == player) {
                count++;
            }
        }
        if (count == SIZE) {
            return 1;
        }
    }

    return 0;
}