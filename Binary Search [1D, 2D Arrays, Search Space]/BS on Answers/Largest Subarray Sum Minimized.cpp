int count(vector<int>&a,int k){
    int group=1;
    int nu=0;
    for(int i=0;i<a.size();i++){
        if(nu+a[i]<=k){
            nu+=a[i];
        }
        else{
            group++;
            nu=a[i];
        }
    }
    return group;
}
int sum(vector<int>&a){
    int s=0;
    for(int i=0;i<a.size();i++){
        s+=a[i];
    }
    return s;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    int low=*max_element(a.begin(),a.end());
    int high=sum(a);
    while(low<=high){
        int mid=(low+high)/2;
        int total=count(a,mid);
        if(total>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
