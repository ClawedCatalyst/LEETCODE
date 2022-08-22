class Solution {
public:
    bool isPowerOfFour(int n) {
        
        bool flag = true;
        
        if(n == 0){
            return false;
        }
        while(1){
            if(n == 1){
                break;
            }
            if(n%4){
                flag = false;
                break;
            }
            n = n/4;
        }
        if(flag) return true;
        return false;
    }
};