 int numSquares(int n) {
        int dp[n+1];
        for(int i=1; i<=n; i++){
            dp[i] = INT_MAX;
        }
        dp[0]=0;
        for(int i=0; i<=n; i++){
            for(int j=1; i+ j*j <=n; j++){
                dp[i+j*j] = min(dp[i+j*j], dp[i]+1);
            }
        }

        return dp[n];
        
    }
