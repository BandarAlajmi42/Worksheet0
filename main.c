#include <stdio.h>
#include "tictactoe.h"

int main(void) {
    char board[9];
    char current_player = 'X';
    int position;
    int winner = 0;
    
    init_board(board);
    
    printf("TicTacToe Game\n");
    
    while (!winner && !is_board_full(board)) {
        print_board(board);
        printf("Player %c, enter position (1-9): ", current_player);
        scanf("%d", &position);
        
        if (make_move(board, position, current_player)) {
            winner = check_winner(board);
            if (!winner) {
                current_player = (current_player == 'X') ? 'O' : 'X';
            }
        } else {
            printf("Invalid move\n");
        }
    }
    
    print_board(board);
    
    if (winner) {
        printf("Player %c wins\n", winner);
    } else {
        printf("It's a draw\n");
    }
    
    return 0;
}
