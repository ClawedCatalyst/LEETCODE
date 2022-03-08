class Solution {
public:
    long long getDescentPeriods(vector<int>& nums) {
        long long cnt = 0;
        long long ans = nums.size();
        
        for(long long i = 0;i<nums.size()-1;i++){
            if(nums[i]-nums[i+1]==1){
                cnt++;
                ans += cnt;
            }
            else{
                cnt = 0;
            }
        }
        return ans;
    }
};