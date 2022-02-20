class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& inter) {
      int cnt = 0,l=-1,r=-1;
        sort(inter.begin(),inter.end());
      for(int i = 0 ;i<inter.size();i++){
          if(inter[i][0]>l && inter[i][1]>r){
              l = inter[i][0];
              cnt++;
              // r = inter[i][1];
          }
          r = max(r,inter[i][1]);
      }
        return cnt;
    }
};