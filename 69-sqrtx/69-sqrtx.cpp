class Solution {
public:
    int mySqrt(int x) {
        int i = 1,j=x;
        int ans = 0;
        while(i<=j){
            int mid = i + (j - i)/2;
            if(mid == x/mid){
                ans = mid;
                return ans;
            }
            else if(mid < x/mid){
                ans = mid;
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return ans;
    
    }
};