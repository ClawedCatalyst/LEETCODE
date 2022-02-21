class Solution {
public:
    int majorityElement(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int sz = nums.size();
        int cnt = 1;
        int major = nums[0];
     for(int i = 0;i<sz-1;i++){
         if(nums[i]==nums[i+1]) cnt++;
         if(cnt > sz/2){
          cnt = 0;   
          major = nums[i];
        }
      }
        return major;
    }
};