class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()){
            return false;
        }
        int x = 0,y= 0;
        int n = s.length();
        while(x<s.length() && y<t.length()){
            if(s[x]!=t[y]){
                y++;
            }
            else if(s[x]==t[y]){
                x++;y++;n--;
            }
        }
        if(n==0){
            return true;
        }
        else{
            return false;
        }
    }
};