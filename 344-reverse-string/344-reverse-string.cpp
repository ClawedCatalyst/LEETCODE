class Solution {
public:
    void reverseString(vector<char>& s) {
     vector<char> ans;
        int n = s.size();
        for(int i = 0;i<n;i++){
            ans.push_back(s[i]);
        }
    
        for(int i = 0;i<n;i++){
            s[i] = ans[n-i-1];
        }
    }
};