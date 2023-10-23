#include <stdio.h>

static void print_board(int n, int (*board)[n])
{
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++)
            printf("%d ", board[y][x]);
        printf("\n");
    }
}

static void fill_board(int n, int (*board)[n])
{
    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            board[y][x] = 0;
}

int is_row_and_col_safe(int row, int col, int n, int (*board)[n])
{
    int keep_row = row;
    int keep_col = col;
    // Check if there is a queen on this row
    while (col >= 0) {
        if (board[row][col] == 1)
            return 0;
        col--;
    }
    row = keep_row;
    col = keep_col;
    // Check diagonal from right to left
    while (row < n && col >= 0) {
        if (board[row][col] == 1)
            return 0;
        row++;
        col--;
    }
    /**
     * We don't need to check for top to bottom since we're never placing 2 queens on the same columns
    */
    return 1;
}

int is_safe(int row, int col, int n, int (*board)[n])
{
    int keep_row = row;
    int keep_col = col;
    // Check diagonal from right to left
    while (col >= 0 && row >= 0) {
        if (board[row][col] == 1)
            return 0;
        col--;
        row--;
    }
    col = keep_col;
    row = keep_row;
    return is_row_and_col_safe(row, col, n, board);
}

static void place_queens(int col, int n, int (*board)[n], int *res)
{
    /**
     * If this condition is reach, that means that all the columns of the board at least have 1 queen
     * N queens have been place so we increment our possibility count
    */
    if (col == n) {
        (*res)++;
        printf("Solution n°%d:\n", *res);
        print_board(n, board);
        printf("------------------------------\n");
        return;
    }
    /**
     * We try to place our queen on each one of the n-row.
     * 
    */
    for (int row = 0; row < n; row++) {

        /**
         * Check if the left-end side of the spot is safe.
         * We don't need to check for the right-end side since we're placing queens from left to right
         * If the position is not safe:
         * - We go to the next row and check again until we reach N-row.
         * If the position is safe:
         * - We place a queen at the said position
         * - Create a recursion to try to place a new queen in the next column.
         * - If the column is equal to N (board is from 0 to N - 1), we found a solution
         * - If the column don't reach N value, we just reset the board, and try with our queen on a new row
         * In summary, we place our first queen in the top left, then try to place our second queen on the first safe row spot in the next column.
         * Once a safe spot as been found, we try to place a third one in the same way (try every row in nbQueens-th column).
         * If there is no safe spot for one of the queen, we backtrack to the previous queen to change her row.
         * If the column reach N, we found one solution, and continue the process until we tried every possibilities 
        */
        if (is_safe(row, col, n, board)) {
            board[row][col] = 1;
            place_queens(col + 1, n, board, res);
            board[row][col] = 0;
        }
    }
}

int n_queens(int n)
{
    if (n <= 0)
        return (84);
    int board[n][n];
    int res = 0;
    fill_board(n, board);
    place_queens(0, n, board, &res);
    return (res);
}