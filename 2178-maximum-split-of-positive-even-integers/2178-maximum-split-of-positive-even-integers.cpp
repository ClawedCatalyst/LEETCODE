class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
       
        if(finalSum%2) return {};
        
        long long sum = 0;
        long long i = 2;
        while((sum+i)<=finalSum){
            ans.push_back(i);
            sum += i;
            i += 2;
        }
        int sz = ans.size();
        ans[sz-1] += (finalSum - sum);
        return ans;
    }
};