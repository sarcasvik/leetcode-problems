class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int m = haystack.length();
        for(int window = 0;window<=m-n;window++){
            for (int i = 0; i < n; i++) {
                if (needle[i] != haystack[window + i]) {
                    break;
                }
                if(i==n-1){
                    return window;
                }
            }
        }
        return -1;
    }
};
