class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int sz = nums.size();
        int cnt = 0;
        for(int i = 0;i<sz;i++){
            for(int j = i+1;j<sz;j++){
                if(nums[i]==nums[j]){
                    if((i*j)%k == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};