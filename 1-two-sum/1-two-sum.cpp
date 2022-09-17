const static auto fast=[]{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int,int>> num;
        for(int i = 0;i<nums.size();i++){
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        int i = 0,j = nums.size() - 1;
        while(i<j){
            if(num[i].first + num[j].first == target){
                ans.push_back(num[i].second);
                ans.push_back(num[j].second);
                return ans;
            }
            else if(num[i].first + num[j].first > target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};