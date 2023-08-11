class Solution {
public:
    
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m;
        for(int i = 0 ;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> mm;
        for(auto i : m){
            mm.push({-i.second,i.first});
        }
        while(!mm.empty()){
            for(int i=0;i<-(mm.top().first);i++){
                ans.push_back(mm.top().second);
            }
            mm.pop();
        }
        return ans;
    }
};