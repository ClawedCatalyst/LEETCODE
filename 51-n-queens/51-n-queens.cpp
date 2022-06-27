class Solution {

    
   bool isPossible(vector<string> &board,int col, int row,int n){
    for(int i = row - 1;i>=0;i--){
    if(board[i][col] == 'Q')
        return false;
  }
  for(int i = row-1,j = col-1;i>=0 && j >=0; i--,j--){
    if(board[i][j] == 'Q')
        return false;
  }
  for(int i = row-1,j=col+1;i>=0 && j < n;i--,j++){
    if(board[i][j] == 'Q')
        return false;
  }
  return true;
   }
   
    
    
    void solve1(vector<vector<string>> &ans,vector<string> &board,int n,int row){
        if(row == n){
            ans.push_back(board);
            return;
        }
        
        for(int col = 0;col<n;col++){
            if(isPossible(board,col,row,n)){
                board[row][col] = 'Q';
                solve1(ans,board,n,row+1);
                board[row][col] = '.';
            }
        }
        return;
    }
    
    
public:
    vector<vector<string>> solveNQueens(int n) {
     vector<vector<string>> ans;
     vector<string> board(n);
        string s(n,'.');
        for(int i = 0;i<n;i++)
            board[i] = s;
        
        solve1(ans,board,n,0);
        return ans;
    }
};