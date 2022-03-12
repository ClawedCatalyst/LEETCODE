class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int ans1 = 0;
        int ans2 = 0;
          for (int i = start; i != destination; i = (i + 1) % distance.size()) {
            ans1 += distance[i];
        }
        
        for (int i = destination; i != start; i = (i + 1) % distance.size()) {
            ans2 += distance[i];
        }
        int ans = min(ans1,ans2);
        return ans;
        
    }
};