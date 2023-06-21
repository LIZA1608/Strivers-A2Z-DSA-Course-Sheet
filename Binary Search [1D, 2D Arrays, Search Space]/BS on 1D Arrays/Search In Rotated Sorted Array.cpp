int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==k){
            return m;
        }
        if(arr[s]<=arr[m]){
            if(arr[s]<=k  &&k<=arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        else{
            if(arr[m]<=k && k<=arr[e]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    return -1;
}
