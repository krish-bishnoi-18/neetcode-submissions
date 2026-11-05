class Solution {
public:
    bool row(vector<vector<char>>& board, int i){
         set<char> st;
         int count = 0;
         for(int j = 0; j < 9; j++){
            if(board[i][j] != '.'){ 
                count++;
                st.insert(board[i][j]);
            }
         }
         return count == st.size(); 
    }
    
    bool col(vector<vector<char>>& board, int i){
         set<char> st;
         int count = 0;
         for(int j = 0; j < 9; j++){
            if(board[j][i] != '.'){ 
                count++;
                st.insert(board[j][i]);
            }
         }
         return count == st.size();
    }
    
    bool box(vector<vector<char>>& board, int a, int b){
         int count = 0;
         set<char> st;
         for(int i = a; i < a + 3; i++){
            for(int j = b; j < b + 3; j++){
                if(board[i][j] != '.'){ 
                    count++;
                    st.insert(board[i][j]);
                }
            }
         }
         return count == st.size();
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
       for(int i = 0; i < 9; i++){
         if(row(board, i) == false){
             return false;
         }
         if(col(board, i) == false){
            return false;
         }
       }
       for(int i = 0; i < 9; i = i + 3){
           for(int j = 0; j < 9; j = j + 3){
            if(box(board, i, j) == false){
                return false;
            }
           }
       }
       return true;
    }
};
