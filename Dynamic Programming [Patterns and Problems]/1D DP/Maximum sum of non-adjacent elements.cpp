//tabulation with space optimization
#include <bits/stdc++.h>
int f(int ind,vector<int>&nums){
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<ind;i++){
        int take=nums[i];
        if(i>1){
            take+=prev2;
        }
        int notpick=0+prev;
        int curr =max(take,notpick);
        prev2=prev;
        prev=curr;
    }
    return prev;
} 
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    return f(n,nums);
//tabulation
#include <bits/stdc++.h>
int f(int ind,vector<int>&nums,vector<int>&dp){
    dp[0]=nums[0];
    int neg=0;
    for(int i=1;i<ind;i++){
        int take=nums[i];
        if(i>1){
            take+=dp[i-2];
        }
        int notpick=0+dp[i-1];
        dp[i]=max(take,notpick);
    }
    return dp[ind-1];
} 
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int>dp(n,-1);
    return f(n,nums,dp);
}
//memorization
#include <bits/stdc++.h>
int f(int ind,vector<int>&nums,vector<int>&dp){
    if(ind==0)return nums[ind];
    if(ind<0)return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick=nums[ind]+f(ind-2,nums,dp);
    int notpick=0+f(ind-1,nums,dp);
             dp[ind]= max(pick,notpick);
             return dp[ind];
} 
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int>dp(n+1,-1);
    return f(n-1,nums,dp);
}
//recurrsion
#include <bits/stdc++.h>
int f(int ind,vector<int>&nums){
    if(ind==0)return nums[ind];
    if(ind<0)return 0;

    int pick=nums[ind]+f(ind-2,nums);
    int notpick=0+f(ind-1,nums);
    return max(pick,notpick);
} 
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    return f(n-1,nums);
}
