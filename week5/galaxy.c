// part1_galaxy.c
//
// This program was written by YOUR-NAME (ZID)
// on DATE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // struct celestial_body body;
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].point = 0;
        }
    }

    // TODO: Place the player in the galaxy
    printf("Enter the starting position of the player: ");
    int valid_spawn = 0;
    int player_row = -1;
    int player_col = -1;
    while (valid_spawn == 0) {
        scanf("%d %d", &player_row, &player_col);
        if (player_row >= 0 && player_row < SIZE && player_col >= 0 && player_col < SIZE) {
            valid_spawn = 1;
        } else {
            printf("Invalid starting position\n");
            printf("Re-enter starting position: ");
        }
    }

    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");
    int count_bodies = -1;
    scanf("%d", &count_bodies);

    // TODO: Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    char body_type;
    int row = -1;
    int col = -1;
    int points = -1;
    for (int i = 0; i < count_bodies; i++) {
        scanf(" %c", &body_type);
        if (body_type == 'p') {
            scanf("%d %d %d", &row, &col, &points);           
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (body_type == 'n'){
            scanf("%d %d", &row, &col);           
            galaxy[row][col].entity = NEBULA;
        } else {
            printf("error");
            return 1;
        }
    }
    
    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");

    // TODO: Print the map
    print_map(galaxy);
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}