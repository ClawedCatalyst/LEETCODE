class Solution {
public:
    int countEven(int num) {
        int n = num;
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        return (sum%2==0) ? (num/2) : (num-1)/2;
    }
};