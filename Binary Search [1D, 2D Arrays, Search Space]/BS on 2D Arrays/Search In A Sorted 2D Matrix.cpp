class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int n=a.size();
        int m=a[0].size();
        int low=0;
        int high=m-1;
        while(low<n && high>=0){
            if(a[low][high]==t){
                return true;
            }
            else if(a[low][high]<t){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};
