class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        int i = 0;
        int j = n-1;
        while( n > 0){
            for(int i = 0;i<n-1;i++){
                ans[i] = (ans[i] + ans[i+1])%10;
            }
            n--;
        }
        return ans[0];
    }
};