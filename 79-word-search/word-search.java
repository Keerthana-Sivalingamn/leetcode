class Solution {
    public boolean dfs(char[][] board, String word, int row, int col, int idx){
        if(idx==word.length())return true;
        if(row>=board.length || row<0 || col>=board[0].length || col<0 || board[row][col]!=word.charAt(idx))return false;
        board[row][col] = '@';
        if(dfs(board, word, row + 1, col, idx+1) || dfs(board, word, row-1, col, idx+1) || dfs(board, word, row, col-1, idx+1) || dfs(board, word, row, col+1, idx+1)){
            return true;
        }
        board[row][col] = word.charAt(idx);
        return false;
    }
    public boolean exist(char[][] board, String word) {
        for(int i=0; i<board.length; i++){
            for(int j=0; j<board[0].length; j++){
                if(board[i][j]==word.charAt(0)){
                    if(dfs(board, word, i, j, 0))return true;
                }
            }
        }
        return false;
    }
}