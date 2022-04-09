class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        vector<int> ans;
        
        for(int i = 0;i<nums1.size();i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int j = 0;j<nums2.size();j++)
        {
            ans.push_back(nums2[j]);
        }
        
        sort(ans.begin(),ans.end());
        int e = ans.size();
        if(e%2!=0){
            int s = 0;
            int f = e - 1;
            int mid = (s+f)/2;
            return ans[mid];
        }
        else{
            int s = 0;
            int f = e - 1;
            int mid = (s+f)/2;
            double x =(ans[mid] + ans[mid + 1])/2.0;
                return x;
        }
        return 0;
        
    }
};