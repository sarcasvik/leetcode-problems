class Solution {
public:
    int climbStairs(int n) {
        if(n ==1){
            return 1;
        }
        int prev = 1;
        int curr = 1;
        for(int i = 2;i<=n;i++){
            int temp = curr; 
            curr = prev + curr; 
            prev = temp;
        }
        return curr;
    }
};
// when observed carefully we can observe a fibonacci pattern 
