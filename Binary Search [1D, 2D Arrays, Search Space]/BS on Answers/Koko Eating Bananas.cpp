#include <bits/stdc++.h>
int find(vector<int>v){
    int n=v.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
    }
    return maxi;
}
int cal(vector<int>v,int mid){
    int total=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        total+=ceil((double)v[i]/(double)mid);
    }
    return total;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int n=v.size();
    int low=1;
    int high=find(v);
    while(low<=high){
        int mid=(low+high)/2;
      int total=cal(v,mid);
      if(total<=h){
          high=mid-1;
      }
      else{
          low=mid+1;
      }
    }
    return low;
}
