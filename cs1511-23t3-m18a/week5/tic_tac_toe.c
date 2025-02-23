#include <stdio.h>

#define SIZE 5
#define PLAYER_WON 1
#define PLAYER_NOT_WIN 0

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

    // we did the above 3 cases in class but to be truly exhaustive in our
    // testing we probably need to test edge cases such as a win along all
    // of the edges, and both diagonals as well - you can try this yourself
    // if you want
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    int i = 0;
    int count = 0;
    while (i < SIZE) {
        if(board[i][i] == player) {
            count++;
        }
        i++;
    }
    if (count == SIZE) {
        return PLAYER_WON;
    }

    i = 0;
    count = 0;
    while (i < SIZE) {
        if (board[i][SIZE - i - 1] == player) {
            count++;
        }
        i++;
    }
    if (count == SIZE) {
        return PLAYER_WON;
    }

    i = 0;
    int j = 0;
    while (i < SIZE) {
        j = 0;
        count = 0;
        while (j < SIZE) {
            if (board[i][j] == player) {
                count++;
            }
            j++;
        }

        if (count == SIZE) {
            return PLAYER_WON;
        }
        i++;
    }

    i = 0;
    while (i < SIZE) {
        j = 0;
        count = 0;
        while (j < SIZE) {
            if (board[j][i] == player) {
                count++;
            }
            j++;
        }

        if (count == SIZE) {
            return PLAYER_WON;
        }
        i++;
    }

    return PLAYER_NOT_WIN;
}
