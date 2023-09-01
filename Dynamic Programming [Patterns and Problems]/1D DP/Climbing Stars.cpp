//tabulation with space optimization T.C->O(N),S.C->O(1)
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)return 1;
        int prev=1;
        int prev2=1;
        for(int i=2;i<=n;i++){
            int curr=prev+prev2;
            prev=prev2;
            prev2=curr;
        }
        return prev2;
    }
};
//tabulation T.C->O(N) ,S.C->O(N)
int solve(int n,vector<int>&dp){
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        cout<<dp[i-1] <<" "<<dp[i-2];
    dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
//MEMORIZATION T.C->O(N),S.C->O(N)
int solve(int n,vector<int>&dp){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=solve(n-1,dp)+solve(n-2,dp);
    return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
