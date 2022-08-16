class Solution {
public:
    char repeatedCharacter(string s) {
        map<int,char> m;
        for(int i = 0;i<s.size();i++){
         if(m.find(s[i]) != m.end()){
             return s[i];
         }
            m[s[i]]++;
        }
        return ' ';
    }
};