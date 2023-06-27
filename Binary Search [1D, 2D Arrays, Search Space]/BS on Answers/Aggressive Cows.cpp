
//binary solution->O(NlogN)->nearly
#include <bits/stdc++.h>
bool canweplease(vector<int>&arr,int dist,int cows){
    int count=1;
    int last=arr[0];
    int n=arr.size();
    for(int i=1;i<=n-1;i++){
        if(arr[i]-last>=dist){
            count++;
            last=arr[i];
        }
    }
    if(count>=cows){
        return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
sort(stalls.begin(),stalls.end());
int n=stalls.size();
int low=0;
int ans=0;
int high=stalls[n-1]-stalls[0];
while(low<=high){
    int mid=(low+high)/2;
    if(canweplease(stalls,mid,k)==true){
        ans=mid;
        low=mid+1;
    }
    else{
    high=mid-1;
    }
}
return high;
}


//brute foure approch ->nearly O(N^2)
#include <bits/stdc++.h>
bool canweplease(vector<int>&arr,int dist,int cows){
    int count=1;
    int last=arr[0];
    int n=arr.size();
    for(int i=1;i<=n-1;i++){
        if(arr[i]-last>=dist){
            count++;
            last=arr[i];
        }
    }
    if(count>=cows){
        return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
sort(stalls.begin(),stalls.end());
int maxi=*max_element(stalls.begin(),stalls.end());
int mini=*min_element(stalls.begin(),stalls.end());
for(int i=1;i<=maxi-mini;i++){
    if(canweplease(stalls,i,k)==true){
        continue;
    }
    else{
        return (i-1);
    }
}
}
