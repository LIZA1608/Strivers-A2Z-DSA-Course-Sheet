//binary search 
int countsmaller(vector<int>&row,int mid){
    int l=0;
    int h=row.size()-1;
    while(l<=h){
        int mide=(l+h)/2;
        if(row[mide]<=mid){
            l=mide+1;
        }
        else{
            h=mide-1;
        }
    }
    return l;
}
int median(vector<vector<int>> &matrix, int m, int n) {
    int low=1;
    int high=1e9;
    while(low<=high){
        int mid=(low+high)/2;
        int c=0;
        for(int i=0;i<m;i++){
            c+=countsmaller(matrix[i],mid);
        }
        if(c<=(m*n)/2){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
//brute force T.C->O(n*m)log(n*m) ,S.C->O(n*m);
int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    vector<int>ans;
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans.push_back(matrix[i][j]);
            c++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans[c/2];
}
