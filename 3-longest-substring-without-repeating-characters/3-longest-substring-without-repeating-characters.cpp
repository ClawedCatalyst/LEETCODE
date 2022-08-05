class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> m;

        int ans = 0;
        int i = 0;
        int j = 0;

        while(j<s.size() && i<s.size()){
            if(m.find(s[i])==m.end()){
                m.insert(s[i++]);
                ans = max(ans,i - j);

            }
            else{
                m.erase(s[j]);
                j++;
            }
        }
        return ans;
    }
};