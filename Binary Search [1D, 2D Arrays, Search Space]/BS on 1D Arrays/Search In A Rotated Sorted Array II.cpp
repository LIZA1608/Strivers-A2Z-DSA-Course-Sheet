bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int n=A.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(A[m]==key )return true;
        if(A[s]==A[m] && A[m]==A[e]){
            s++;
            e--;
            continue;
        }
        if(A[s]<=A[m]){
            if(A[s]<=key  && key<=A[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        else{
            if(A[m]<=key && key<=A[e]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    return false;
}
