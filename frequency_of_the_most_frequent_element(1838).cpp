// sliding window problem
class Solution {
public:
    int maxFrequency(vector<int>& nums, long k) {
        long sum = 0 , ans = 1; 
        sort(nums.begin(),nums.end());
        long l =0, r= 0;
        while(r<nums.size()){
            sum = sum + nums[r];
            while(nums[r]*(r-l+1) > sum +k){
                sum = sum - nums[l];
                l++;
            } 
            ans = max(ans, r-l+1);
            r++;
        }
        
        return ans;
    }
};

//while(nums[r]*(r-l+1) <= sum +k) is the condition we need to expand the window
//if this is not the case then shrink the window(like we did in the problem)
// here r-l+1 is the window length 

