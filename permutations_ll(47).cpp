// used inbuilt next_permutation function
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        do{
            
            v.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        
        
        return v;
    }
};