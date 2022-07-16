class Solution {
public:
    
    int mod = 1e9+7;
    int dp[50][50][51];
    int searchForOut(int m, int n, int maxMove, int startRow, int startColumn){
        if(startRow<0 or startRow >= m or startColumn < 0 or startColumn >=n){
            return 1;
        }
        

        if (maxMove<=0){
            return 0;
        }
        

        if(dp[startRow][startColumn][maxMove]!=-1){
            return dp[startRow][startColumn][maxMove];
        }
            
        long int res = 0;
        
        res += searchForOut( m, n,  maxMove-1, startRow-1, startColumn);
        
        res += searchForOut( m, n,  maxMove-1, startRow+1, startColumn);
            
        res += searchForOut( m, n,  maxMove-1, startRow, startColumn-1);
        
        res += searchForOut( m, n,  maxMove-1, startRow, startColumn+1);
        
        
        return dp[startRow][startColumn][maxMove] = res % mod;
        
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp,-1,sizeof(dp)); 
        
        return searchForOut( m, n,  maxMove, startRow, startColumn) % mod; 
            
        
    }    
};