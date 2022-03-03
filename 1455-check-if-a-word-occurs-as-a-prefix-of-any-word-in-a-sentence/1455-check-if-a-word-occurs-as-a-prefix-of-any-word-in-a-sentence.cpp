class Solution {
public:
    int isPrefixOfWord(string sent, string sWord) {
        int cnt = 1;
        string t = "";
        int n = sent.size();
        for(int i = 0;i<n;i++){
            if(sent[i]!=' '){
                t += sent[i];
                if(t==sWord) return cnt;
            }
            else{
                cnt++;
                t = "";
            }
        }
        return -1;
        
    }
};