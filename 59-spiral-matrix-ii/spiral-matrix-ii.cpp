class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>>ans(n, vector<int>(n,0));

        int starting_row = 0;
        int ending_row = n-1;

        int starting_col = 0;
        int ending_col = n-1;

        int cnt = 0;
        int total = n*n;

        int counting = 1;

        while(cnt < total){

            for(int i = starting_col; cnt < total && i<=ending_col ; i++){
             
                ans[starting_row][i] = counting++;

                cnt++;

            }
            starting_row++;

            for(int i= starting_row; cnt < total && i<= ending_row;i++){
                
                ans[i][ending_col] = counting++;
               
                cnt++;
            }   
            ending_col--;

            for(int i= ending_col; cnt < total && i>=starting_col;i-- ){
                ans[ending_row][i] = counting++;

                cnt++;
            }

            ending_row--;

            for(int i = ending_row; cnt < total && i>= starting_row; i-- ){

                ans[i][starting_col] = counting++;
                cnt++;

            }
            
            starting_col++;
        }
        return ans;     
    }
};