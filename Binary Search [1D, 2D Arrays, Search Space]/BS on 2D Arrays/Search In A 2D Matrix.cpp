bool searchMatrix(vector<vector<int>>& a, int k) {
        int n=a.size();
        int m=a[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(a[row][col]==k){
                return true;
            }
            else if(a[row][col]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
}
