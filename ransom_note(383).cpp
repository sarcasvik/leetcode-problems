class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        int x = ransomNote.length();
        int y = magazine.length();
        for(int i = 0; i<y;i++){
            m[magazine[i]]++;
        }
        for(int i = 0; i<x; i++){
            if (m[ransomNote[i]]>=0){
                m[ransomNote[i]]--;
            }
            if (m[ransomNote[i]]<0){
                return false;
            }
        }
        
        return true;
    }
};