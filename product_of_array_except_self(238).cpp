class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        long long temp =1;
        int flag =0;
        for(int i = 0 ;i < nums.size();i++){
            if(nums[i]!=0)
                temp =temp*nums[i];
            else 
                flag++;
            
        }
        for(int i = 0 ;i<nums.size();i++){
            if(flag ==0){
                ans.push_back(temp/nums[i]);
            }
            else if(flag>1){
                ans.push_back(0);
            }
            else{
                if(nums[i]==0){
                    ans.push_back(temp);
                }
                else{
                    ans.push_back(0);
                }
            }
        }

        return ans;
    }
};