class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {

        for(int i = 0;i<nums.size();i++){
          vector<int> ans;
            int flag = 0;
            for(int j = 0;j<nums.size();j++){
                if(i!=j)ans.push_back(nums[j]);
                
                        
            }
            for(int k = 0;k<ans.size()-1;k++){
                if(ans[k] == ans[k+1]){
                    flag = 1;
                    break;
                }
            }
            vector<int> temp = ans;
            sort(temp.begin(),temp.end());
            if(temp == ans && flag == 0) return true;
        }
        return false;
    }
};