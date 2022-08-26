class Solution {
public:
    int rob(vector<int>& a) {
       int n = a.size();
        if(n == 1) return a[0];
       vector<int> dp(n + 1, 0);
       dp[1] = a[0];
       dp[2] = max(a[0],a[1]); 
       for(int i = 3; i<=n ;i++){
        dp[i] = max(dp[i-1], dp[i-2] + a[i - 1]);
       }
        return dp[n];
    }
};