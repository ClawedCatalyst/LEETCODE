class Solution {
public:
    string convertToBase7(int n) {
        int temp;
        string ans;
        if(n == 0){
            return "0";
        }
    if(n<0){
         ans = "-";
         temp = abs(n);
    }
        else{
          ans = "";
         temp = n;
    }
        while( temp!= 0){
            int digit = temp%7;
            ans += to_string(digit);
            temp = temp/7;
        }
        string realans = "";
        if(n >= 0){
        for(int i = ans.size()-1;i>=0;i--){
            realans += ans[i];
        }
        }
            else{
                realans = "-";
                 for(int i = ans.size()-1;i>=1;i--){
                 realans += ans[i];
        }
       }
            return realans;
    }
};