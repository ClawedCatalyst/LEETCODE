class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int sz = people.size();
        sort(people.begin(),people.end());
        int ans = 0;
        int i = 0;
        int j = sz - 1;
        while(i<=j){
            int sum = people[i] + people[j];
            if(sum <= limit){
                ans++;
                i++;
                j--;
            }
            else{
                ans++;
                j--;
            }
        }
        return ans;
    }
};