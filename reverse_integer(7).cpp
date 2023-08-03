// made seperate cases for positive and negative inputs 
// we are checking who long the input is and using it for the while loop to reverse
class Solution {
public:
    int reverse(int x) {       
        if(x>=0){
            int temp = x;
            long ans = 0;
            int p =0;
            while(temp!=0){
                temp= temp/10;
                p++;
            }
            p--;
            while(x!=0){
                int dig = x%10;
                x=x/10;
                ans = ans+ dig*pow(10,p);
                p--;
            }
            if(ans<INT_MIN || ans>INT_MAX){
                return 0;
            }
            return ans;
        }
        else{
            x=abs(x);
            int temp = x;
            long ans = 0;
            int p =0;
            while(temp!=0){
                temp= temp/10;
                p++;
            }
            p--;
            while(x!=0){
                int dig = x%10;
                x=x/10;
                ans = ans+ dig*pow(10,p);
                p--;
            }
            if(ans<INT_MIN || ans>INT_MAX){
            return 0;
            }
            ans = ~ans;
            ans++;
            return ans;
        }
    }
};