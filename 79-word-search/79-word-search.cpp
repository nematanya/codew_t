class Solution {
public:
  bool exist(vector<vector<char>>& board, string word) {
    for ( int i = 0; i < board.size(); i++) 
        for ( int j = 0; j < board[0].size(); j++) 
            if (nei(board, i, j, word))
                return true;
    return false;
}

bool nei(vector<vector<char>>& board, int i, int j, string word) {
    if (word.size()==0) 
        return true;
    if (i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j] != word[0])  
        return false;
    char c = board[i][j];
    board[i][j] = '@';
    string s = word.substr(1);
    bool res = nei(board, i-1, j, s) or nei(board, i+1, j, s) or nei(board, i, j-1, s) or nei(board, i, j+1, s);
    board[i][j] = c; //first char restored
    return res;
}
};