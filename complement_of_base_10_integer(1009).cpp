/* 
e.g. let n = 5
n=000....101
then
mask = 000....111
now 
ans will be the AND of ~n and mask
i.e.
1111....010 & 0000....111
i.e.
0000....010;
that is equal to 2 
*/
class Solution {
public:
    int bitwiseComplement(int n) {
        int m =n;
        int mask = 0;
        
        if(m ==0){
            return 1;
        }
        while(m!=0){
            mask = (mask<<1)|1;
            m = m>>1;
        }
        int ans = (~n)&mask;
        
        return ans;
       
    }
};