// tabulation with space optimization
int mod=(int)(1e9+7);
int f(int m,int n,vector<vector<int>>&mat){
    vector<int>prev(n,0);
   for(int i=0;i<m;i++){
       vector<int>temp(n,0);
       for(int j=0;j<n;j++){
           if(i>=0 && j>=0 && mat[i][j]==-1){
                 temp[j]=0;
                   continue;
           }
           if(i==0 && j==0){
               temp[j]= 1;
               continue;
           }
           if(i<0 || j<0){
               temp[j]=0;
               continue;
           }
           int up=0,left=0;
           if(i>0){
               up=prev[j];
           }
           if(j>0){
               left=temp[j-1];
           }
           temp[j]=(up+left)%mod;
       }
       prev=temp;
   }
   return prev[n-1];
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
 return f(n,m,mat);
}
//tabulation
int mod=(int)(1e9+7);
int f(int m,int n,vector<vector<int>>&mat,vector<vector<int>>&dp){
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           if(i>=0 && j>=0 && mat[i][j]==-1){
                   dp[i][j]=0;
                   continue;
           }
           if(i==0 && j==0){
               dp[i][j]= 1;
               continue;
           }
           if(i<0 || j<0){
               dp[i][j]=0;
               continue;
           }
           int up=0,left=0;
           if(i>0){
               up=dp[i-1][j];
           }
           if(j>0){
               left=dp[i][j-1];
           }
           dp[i][j]=(up+left)%mod;
       }
   }
   return dp[m-1][n-1];
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m,-1));
 return f(n,m,mat,dp);
}
// memorization
int f(int m,int n,vector<vector<int>>&mat,vector<vector<int>>dp){
  int mod=(int)(1e9+7);
    if(m>=0 && n>=0 && mat[m][n]==-1)return 0;
    if(m==0 && n==0)return 1;
    if(m<0 || n<0)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    int up=f(m-1,n,mat,dp);
    int left=f(m,n-1,mat,dp);
        return   dp[m][n]=(up+left)%mod;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m,-1));
 return f(n-1,m-1,mat,dp);
}
//recurrsion
int f(int m,int n,vector<vector<int>>&mat){
    if(m>=0 && n>=0 && mat[m][n]==-1)return 0;
    if(m==0 && n==0)return 1;
    if(m<0 || n<0)return 0;
    int up=f(m-1,n,mat);
    int left=f(m,n-1,mat);

    return up+left;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
 return f(n-1,m-1,mat);
}
