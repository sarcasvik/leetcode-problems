// striver dsa sheet q1
//assuming there is no negative number
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        for(int i =0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(matrix[i][j]==0){
                    //int r = rows, c= cols;
                    for(int x= 0;x<cols;x++){
                        if(matrix[i][x]!=0){
                            matrix[i][x]=-999;
                        }
                    }
                    for(int x= 0;x<rows;x++){
                        if(matrix[x][j]!=0){
                            matrix[x][j]=-999;
                        }
                    }                    
                }
            }
        }
        for(int i =0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(matrix[i][j]==-999){
                    matrix[i][j]=0;                               
                }
            }
        }
        
    }
};

// 2nd approach would be :
/* make 2 dummy arrays for row and col each 
if in a row there is atleast one 0 then initialize that index to 0 otherwise 1;
do the same for col
transverse the whole 2d array with the following condition 
if(dummy(i) || dummy(j))
then array[i][j]=0;
*/
