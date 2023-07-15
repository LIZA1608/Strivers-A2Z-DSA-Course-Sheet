#include <bits/stdc++.h> 
long long int solve(vector<int>& arr){
    long long int n=arr.size();
    long long int prev=arr[0];
    long long int prev2=0;
    for(int i=1;i<n;i++){
       long long int take=arr[i];
        if(i>1){
            take+=prev2;
        }
       long long  int nottake=0+prev;
       long long int curr=max(take,nottake);
        prev2=prev;
        prev=curr;
    } 
    return prev;
}
long long int houseRobber(vector<int>& arr)
{
 vector<int>temp1,temp2;
long long int n=arr.size();
if(n==1)return arr[0];
 for(int i=0;i<n;i++){
     if(i!=0){
         temp1.push_back(arr[i]);
     }
     if(i!=n-1){
         temp2.push_back(arr[i]);
     }
 }
 return max(solve(temp1),solve(temp2));   
}
