class Solution {
  public:
    int binarysearch(int a[], int n, int k) {
       int start=0;
       int end=n-1;
       int mid=start+(end-start)/2;
       while(start<=end){
           if(a[mid]==k){
               return mid;
           }
           else if(a[mid]<k){
               start=mid+1;
           }
           else{
               end=mid-1;
           }
           mid=start+(end-start)/2;
       }
       return -1;
    }
};
