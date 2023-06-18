#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    map<int,int>mp;
    int xr=0;
    int c=0;
mp[xr]++;
    for(int i=0;i<n;i++){
    xr=xr^a[i]; 
    int x=xr^b;
c+=mp[x];
mp[xr]++;
    }
    return  c;
}
