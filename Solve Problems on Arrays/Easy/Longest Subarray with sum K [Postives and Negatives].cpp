#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int n=nums.size();
    long sum=0;
    int maxi=0;
    map<long long ,int>mp;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==k){
            maxi=max(maxi,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            maxi=max(maxi,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    return maxi;
}
