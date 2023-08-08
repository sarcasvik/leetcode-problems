// Can be solved via backtracking and can be optimized via mapping

// for optimizing
// vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);


bool issafe(int row,int col,int n,vector<string> &board){
    int x = row, y=col;
    // checking row
    while(y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        y--;
    }
    // upward diagonal 
     x = row, y=col;
    while(x>=0 && y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        x--;y--;
    }
    // lower diagonala
     x = row, y=col;
    while(x<n && y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        x++;y--;
    }
    return true;
}

void solve(int col,int n,vector<string> &board,vector<vector<string>> &ans){
    //base case
    if(col == n){
        ans.push_back(board);
        return;
    }
    // solve for 1 case rest recursion will handle
    for(int row = 0;row<n;row++){
        if(issafe(row,col,n,board)){
            // if placing queen is safe
            board[row][col]='Q';
            solve(col+1,n,board,ans);

            // backtrack
            board[row][col]='.';
        }
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        vector<vector<string>> ans; 
        string s(n,'.');
        for(int i = 0;i<n;i++){
            board[i]=(s);
        }
        int col = 0;
        solve(col,n,board,ans);
        return ans;
    }
};