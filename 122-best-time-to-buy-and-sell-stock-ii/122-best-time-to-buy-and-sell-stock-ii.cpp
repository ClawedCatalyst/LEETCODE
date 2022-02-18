class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int ans = 0;
        for(int i = 1;i<sz;i++){
            int a = prices[i] - prices[i-1];
            ans += max(a,0);
        }
        return ans;
    }
};