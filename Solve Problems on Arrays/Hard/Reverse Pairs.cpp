void merge(vector<int>&a,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    
    vector<int>temp;
    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
            }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
   
}
int countpair(vector<int>&a,int low,int mid,int high){
    int c=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && a[i]>2*a[right]){
            right++;
        }
        c+=(right-(mid+1));
    }
    return c;
}
int mergesort(vector<int>&a,int low,int high){
    int c=0;
    if(low>=high){
        return c;
    }
    int mid=(low+high)/2;
    c+=mergesort(a,low,mid);
    c+=mergesort(a, mid+1,high);
    c+=countpair(a,low,mid,high);
    merge(a,low,mid,high);
    return c;
    }
int team(vector <int> & skill, int n)
{
   return mergesort(skill,0,n-1);
    
}
