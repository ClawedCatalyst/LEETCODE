class Solution {
public:
    
    int solve(vector<vector<int>>& dp, vector<vector<int>>& grid, int n, int m,int i ,        int j){
        if(i >= n || j >= m){
            return INT_MAX;
        }
        if(i == n-1 && j == m-1){
            return grid[n-1][m-1];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        dp[i][j] = grid[i][j] + min(solve(dp,grid,n,m,i,j+1),solve(dp,grid,n,m,i+1,j));
        return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp( n , vector<int> (m, -1)); 
        return solve(dp,grid,n,m,0,0);
    }
};