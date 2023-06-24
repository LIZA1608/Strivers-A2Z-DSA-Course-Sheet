int daysreq(vector<int>arr,int mid){
    int n=arr.size();
    int load=0;
    int day=1;
    for(int i=0;i<n;i++){
           if(load+arr[i]>mid){
               day=day+1;
               load=arr[i];
           }
           else{
               load+=arr[i];
           }
    }
    return day;
}
int sum(vector<int>arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int n=weights.size();
    int low=*max_element(weights.begin(),weights.end());
    int high=sum(weights,n);
    while(low<=high){
        int mid=(low+high)/2;
        if(daysreq(weights,mid)<=d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
