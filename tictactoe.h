#ifndef TICTACTOE_H
#define TICTACTOE_H

void init_board(char *board);
void print_board(char *board);
int make_move(char *board, int position, char player);
int check_winner(char *board);
int is_board_full(char *board);

#endif
