// we can solve it using dp

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1,0); //initilize the array with 0 
        dp[0]=1;
        // apply the formula : dp[i]= dp[i]+dp[i-coin] for all the columns
        for(int i =0;i<coins.size();i++){
            for(int j = coins[i];j<=amount;j++){
                int x = coins[i];
                dp[j]=dp[j]+dp[j-x];
            }
        }
        return dp[amount];
    }
};