class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        for(int i = 0; i < n + 1; i++){
            dp[i] = -1;
        }
        return fxn(n,dp);
    }

    int fxn(int n, int dp[]){
        if(n == 0){
            return 1;
        }else if(n < 0){
            return 0;
        }

        if(dp[n] == -1){
            int j1 = fxn(n-1, dp);
            int j2 = fxn(n-2, dp);
            dp[n] = j1 + j2;
            return j1+j2;
        }else{
            return dp[n];
        }

    }
};