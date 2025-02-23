// part1_galaxy.c
//
// This program was written by T15B 
// on 25/06/24
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

void initialize_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void enter_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);
void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    // Initialize the galaxy
    struct celestial_body galaxy[SIZE][SIZE];
    initialize_galaxy(galaxy);

    // Place the planets and nebulae in the galaxy
    enter_planets_nebulae(galaxy);

    // Place the player in the galaxy
    place_player(galaxy);

    // Place the stars in the galaxy
    place_stars(galaxy);

    // print the map
    print_map(galaxy);

    return 0;
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

// Function initialises each cell in the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void initialize_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

// Function adds nebulae to the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void enter_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae:\n");
    char command;
    int row;
    int col;
    int points;
    scanf(" %c", &command);
    while (command != 'q') {
        if (command == 'p') {
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else {
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
        }
        scanf(" %c", &command);
    }
}

// Function initialises the players' position in the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int row;
    int col;
    scanf("%d %d", &row, &col);
    while (galaxy[row][col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf("%d %d", &row, &col); 
    }
    galaxy[row][col].entity = SPACESHIP;
}

// Function places stars in the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the position and points of the star(s):\n");
    int row;
    int col;
    int points;
    while(scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }
}