//TABULATION WITH SPACE OPTIMIZATION  T.C->O(N)  S.C->O(1)
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
 int p1=0;
 int p2=1;
 for(int i=2;i<=n;i++){
         int curr=p1+p2;
         p1=p2;
         p2=curr;
 }
 return p2;
}
int main()
{
      int n;
      cin>>n;
      cout<<fibo(n);
}

//TABULATION T.C->O(N),S.C->O(N)
#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>&dp){
        dp[0]=0;dp[1]=1;
       for(int i=2;i<=n;i++){
               dp[i]=dp[i-1]+dp[i-2];
       }
        return dp[n];
}
int main()
{
      int n;
      cin>>n;
      vector<int>dp(n+1,-1);
            cout<<fibo(n,dp);
}
//memorization T.C->O(N),S.C->O(N)+O(N)
#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
        return dp[n];
}
int main()
{
      int n;
      cin>>n;
      vector<int>dp(n+1,-1);
            cout<<fibo(n,dp);
}
