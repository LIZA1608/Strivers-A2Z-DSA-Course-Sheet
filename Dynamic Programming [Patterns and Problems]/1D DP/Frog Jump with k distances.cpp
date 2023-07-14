int mini(int n,vector<int>&arr,vector<int>&dp,int k){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mn=INT_MAX;
        for(int j=1;j<=k;j++){
          if (i - j >= 0) {
            int jumps = dp[i - j] + abs(arr[i] - arr[i - j]);
            mn = min(mn, jumps);
          }
        }
        dp[i]=mn;
    }
    return dp[n-1];
}
int minimizeCost(int n, int k, vector<int> &height){
vector<int>dp(n+1,-1);
return mini(n,height,dp,k);
}
