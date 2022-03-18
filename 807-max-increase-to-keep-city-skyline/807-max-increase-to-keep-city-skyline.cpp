class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sz = grid.size();
        vector<int> a(sz);
        vector<int> b(sz);
        int sum = 0;
        for(int i = 0;i<sz;i++){
            for(int j = 0;j<sz;j++){
                a[i] = max(a[i],grid[i][j]);
                b[j] = max(b[j],grid[i][j]);
            }
        }
        for(int i = 0;i<sz;i++){
            for(int j = 0;j<sz;j++){
                sum += min(a[i],b[j]) - grid[i][j];
            }
        }
        return sum;
    }
};