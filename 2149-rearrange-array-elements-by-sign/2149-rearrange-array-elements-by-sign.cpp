class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> posi;
       vector<int> negi;
       for(int i = 0;i<nums.size();i++){
           if(nums[i]>0) posi.push_back(nums[i]);
           else if(nums[i]<0) negi.push_back(nums[i]);
       }
        vector<int> ans;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
         if(i%2==0) ans.push_back(posi[cnt]);
         if(i%2!=0) {
             ans.push_back(negi[cnt]);
             cnt++;
         }
       }
        return ans;
    }
};