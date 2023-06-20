#include <bits/stdc++.h> 
int lower(vector<int>& arr, int n, int k){
    int ans=n;
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]>=k){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
int upper(vector<int>& arr, int n, int k){
 int ans=n;
 int s=0;
 int e=n-1;
 while(s<=e){
     int m=(s+e)/2;
     if(arr[m]>k){
         ans=m;
         e=m-1;
     }
     else{
         s=m+1;
     }
 }   
 return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    
   int lb=lower(arr,n,k);
   if(lb==n || arr[lb]!=k){
     return {-1, -1};
   }
   return{lb,upper(arr,n,k)-1};
}
