class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> temp;
        for(auto i:nums){
            temp.insert(i);
        }
        int j=0;
        for(auto i:temp){
            nums[j]=i;j++;
        }
        return temp.size();
    }
};