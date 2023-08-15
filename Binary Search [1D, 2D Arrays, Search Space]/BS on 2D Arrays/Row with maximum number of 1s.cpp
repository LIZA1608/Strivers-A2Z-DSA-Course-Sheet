int lower(vector<int>arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
               ans=mid;
               high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int c=-1;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=m-lower(matrix[i],m,1);
        if(count>c){
            c=count;
            index=i;
        }
    }
    return index;
}
