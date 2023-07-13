class Solution 
{
    public:
    int count(int A[],int k,int n){
        int student=1;
        int nuofpage=0;
        for(int i=0;i<n;i++){
            if(nuofpage+A[i]<=k){
                nuofpage+=A[i];
            }
            else{
                student++;
                nuofpage=A[i];
            }
        }
        return student;
    }
    int maxi(int A[],int n){
        int maxii=0;
        for(int i=0;i<n;i++){
            if(maxii<A[i]){
                maxii=A[i];
            }
        }
        return maxii;
    }
    int sum(int A[],int n){
        int s=0;
        for(int i=0;i<n;i++){
            s+=A[i];
        }
        return s;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int n, int m) 
    {
        if(m>n)return -1;
        int low=maxi(A,n);
        int high=sum(A,n);
        while(low<=high){
            int mid=(low+high)/2;
            int student=count(A,mid,n);
            if(student>m){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
