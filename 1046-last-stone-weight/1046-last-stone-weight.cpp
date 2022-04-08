class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      vector<int> ans = stones;
        for(int i = 0;i<stones.size()-1;i++){
            sort(ans.begin(),ans.end());
            ans[ans.size()-2] = abs(ans[ans.size()-1] 
                                -ans[ans.size()-2]);
                ans[ans.size()-1] = 0;
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};