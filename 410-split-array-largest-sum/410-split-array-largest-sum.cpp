class Solution {
public:
    bool isPossible(vector<int>& nums, int mid,int m)
    {
        int count = 1;
  int sume = 0;
  for(int i = 0;i<nums.size();i++){
      if(sume + nums[i] <= mid){
          sume += nums[i];                      // (17 + 32)/2 = 24
      }                                         // (17 + 23)/2 = 20
      else                                      // (17 + 19)/2 = 18
      {                                         
          count++;
          if(count > m || nums[i]>mid){
              return false;
          }
      sume = nums[i];    
      }
      
  }
    return true;
}

    
    
    int splitArray(vector<int>& nums, int m) {
        int s = 0;
        int sum = 0;
        int ans = -1;
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        int e = sum;
        
        int mid = s + (e - s)/2;
        while(s<=e){
             
            if(isPossible(nums,mid,m))
            {
                ans = mid;
                e = mid - 1;
                
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};