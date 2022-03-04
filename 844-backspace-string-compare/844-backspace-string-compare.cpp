class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int nt = t.size();
        string ss = "";
        string tt = "";
        for(int i = 0;i<n;i++){
           if(s[i]!='#') ss += s[i];
            else if(s[i]=='#' && ss.size()==0)    continue;
             else ss.pop_back();
            }
        for(int i = 0;i<nt;i++){
           if(t[i]!='#') tt += t[i];
            else if(t[i]=='#' && tt.size()==0)    continue;
            else tt.pop_back();
        }
       return (ss==tt);
    }
};