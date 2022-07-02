class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
       for( int i = 0 ; i < ( 1 << n ) ; ++ i ) {
           int xorr = 0;
        for ( int j = 0; j < n ; ++ j ) {       
            if ( ( i & ( 1 << j ) ) != 0 )    
                xorr ^= nums[j];        
          }
           sum += xorr;
      }
        return sum;
 
    }
};