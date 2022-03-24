class Solution {
public:
    int findMin(vector<int>& nums) {
        int k = 1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) k++;
            else break;
        }
       
        return nums[(0+k)%nums.size()];;
    }
};