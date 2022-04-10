class Solution {
public:
    int calPoints(vector<string>& ops) {
       vector<int> ans;
       int n = ops.size();
        for(int i = 0;i<n;i++){
            if(i==0){
                ans.push_back(stoi(ops[i]));
            }
            else if(ops[i] == "D"){
                ans.push_back(ans[ans.size()-1]*2);
            }
            else if(ops[i] == "C"){
                ans.pop_back();
            }
            else if(ops[i] == "+"){
                ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
            }
            else{
                ans.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for(int i = 0;i<ans.size();i++){
            cout << ans[i] << " ";
            sum += ans[i];
        }
        
        return sum;
    }
};