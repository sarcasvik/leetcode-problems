class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for (int i =0;i<nums.size();i++){
            if(i+1 <nums.size() && nums[i]>nums[i+1]){
                count++;
            }
            if(i+1== nums.size()){
                if(nums[i]>nums[0])
                    count++;
            }
        }
        if(count>=2){
            return false;
        }
        else
            return true;
    }
};