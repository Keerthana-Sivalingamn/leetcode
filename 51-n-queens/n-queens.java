import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> solutions = new ArrayList<>();
        char[][] board = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = '.';
            }
        }
        place(board, 0, n, solutions);
        return solutions;
    }

    static boolean safe(char[][] board, int row, int col, int n) {
        
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        
        for (int i = row; i >= 0; i--) {
            if (board[i][col] == 'Q') return false;
        }
    
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }
        return true;
    }

    static void place(char[][] board, int row, int n, List<List<String>> solutions) {
        if (row == n) {
            solutions.add(construct(board, n));
            return;
        } else {
            for (int col = 0; col < n; col++) {
                if (safe(board, row, col, n)) {
                    board[row][col] = 'Q';
                    place(board, row + 1, n, solutions);
                    board[row][col] = '.';
                }
            }
        }
    }

    static List<String> construct(char[][] board, int n) {
        List<String> solution = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            solution.add(new String(board[i]));
        }
        return solution;
    }
}