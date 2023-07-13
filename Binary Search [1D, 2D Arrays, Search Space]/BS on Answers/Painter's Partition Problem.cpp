 int sum(vector<int>&arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int count(vector<int>&boards,int k){
     int painter=1;
    long long nuofboard=0;
    for(int i=0;i<boards.size();i++){
        if(nuofboard+boards[i]<=k){
            nuofboard+=boards[i];
        }
        else{
            painter+=1;
            nuofboard=boards[i];
        }
    }
    return painter;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
   int n=boards.size();
   if(k>n) return -1;
   int low=*max_element(boards.begin(),boards.end());
   int high=sum(boards,n);
   while(low<=high){
       int mid=(low+high)/2;
       int painter=count(boards,mid);
       if(painter>k){
           low=mid+1;
       }
       else{
      high = mid - 1;
       }
}
return low;
}
