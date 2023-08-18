class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = 0 ,n=0;
        string ans="";
        while(m<word1.length() && n <word2.length()){
            ans +=word1[m];m++;
            ans +=word2[n];n++;
        }
        while(m<word1.length()){
            ans+=word1[m];m++;
        }
        while(n<word2.length()){
            ans+=word2[n];n++;
        }
        return ans;
    }
};