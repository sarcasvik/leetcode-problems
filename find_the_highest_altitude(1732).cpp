class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxpt=max(0,gain[0]);
        int temp =gain[0];
        for(int i = 1 ;i<gain.size();i++){
            maxpt = max(maxpt,temp);
            temp= temp+gain[i];
            maxpt = max(maxpt,temp);
        }

        return maxpt;
    }
};