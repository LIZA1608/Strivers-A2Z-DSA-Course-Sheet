#include<bits/stdc++.h>
int lengthOfLongestSubarray(int arr[],int n)
{
    // Write your code here
    int maxi=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=max(maxi,i+1);
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return  maxi;
}
