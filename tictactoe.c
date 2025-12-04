#include <stdio.h>
#include "tictactoe.h"

void init_board(char *board) {
    for (int i = 0; i < 9; i++) {
        *(board + i) = '1' + i;
    }
}

void print_board(char *board) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", *(board + i * 3), *(board + i * 3 + 1), *(board + i * 3 + 2));
        if (i < 2) {
            printf("-----------\n");
        }
    }
    printf("\n");
}

int make_move(char *board, int position, char player) {
    if (position < 1 || position > 9) {
        return 0;
    }
    
    int index = position - 1;
    if (*(board + index) == 'X' || *(board + index) == 'O') {
        return 0;
    }
    
    *(board + index) = player;
    return 1;
}

int check_winner(char *board) {
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };
    
    for (int i = 0; i < 8; i++) {
        if (*(board + wins[i][0]) == *(board + wins[i][1]) && 
            *(board + wins[i][1]) == *(board + wins[i][2])) {
            return *(board + wins[i][0]);
        }
    }
    
    return 0;
}

int is_board_full(char *board) {
    for (int i = 0; i < 9; i++) {
        if (*(board + i) != 'X' && *(board + i) != 'O') {
            return 0;
        }
    }
    return 1;
}
