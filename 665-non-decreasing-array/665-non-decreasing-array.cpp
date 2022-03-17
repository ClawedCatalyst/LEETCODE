class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        vector <int> arr1=nums;
        vector <int> arr2=nums;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                arr1[i]=arr1[i+1];
                arr2[i+1]=arr2[i];
                break;
            }
        }
        vector <int> sortarr1=arr1;
        vector <int> sortarr2=arr2;
        sort(sortarr1.begin(),sortarr1.end());
        sort(sortarr2.begin(),sortarr2.end());
        if(arr1==sortarr1||arr2==sortarr2)
            return true;
        return false;
    }
};