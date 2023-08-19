class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans =0;
        int i =0, j = height.size()-1;
        while(i<j){
            if(height[i]>=height[j]){
                int temp = height[j]*(j-i);
                ans = max(ans,temp);
                j--;
            }
            else{
                int temp = height[i]*(j-i);
                ans = max(ans,temp);
                i++;
            }
        }
        return ans;
    }
};
