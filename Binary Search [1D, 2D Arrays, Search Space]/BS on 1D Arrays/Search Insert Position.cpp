int searchInsert(vector<int>& arr, int x)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    int ans=n;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>=x){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
	
}
