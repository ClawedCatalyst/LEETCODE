class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        map<char,int> m;
        if(m[s[0]] == n){
            return true;
        }
        if(n%2 == 0){
          if(s.substr(0,n/2) == s.substr(n/2,n/2)){
            return true;
         }
        }
        int i;
        bool flag = false;
        for(i = n-1;i >= 0 ; i--){
            if(i%2) i--;
            if(s.substr(0,i/2) == s.substr(i/2,i/2)){
                flag = true;
                break;
            }
        }
        if(i == 0){
            flag = false;
        }

        if(flag){
            int k;
            for(k = 0; k < n ; k += n - i){
             if(s.substr(k,n-i) == s.substr(i,n-i)){
                 continue;
             }
                else break;
            }
            if(k == n){
                return true;
            }
        }
        return false;
    }
};