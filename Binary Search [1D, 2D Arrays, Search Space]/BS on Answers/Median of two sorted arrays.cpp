#include<bits/stdc++.h>
double median(vector<int>& a, vector<int>& b) {
     int n=a.size();
	int m=b.size();
	int t=n+m;
	if(n>m) return median(b,a);
	int low=0;
	int high=n;
	int left=(n+m+1)/2;
	while(low<=high){
       int mid1=(low+high)/2;
	   int mid2=(left-mid1);
       int l1=INT_MIN;
	   int l2=INT_MIN;
	   int r1=INT_MAX;
	   int r2=INT_MAX;
	   if(mid1<n){
		   r1=a[mid1];
	   }
	   if(mid2<m){
		   r2=b[mid2];
	   }
	   if(mid1-1>=0){
		   l1=a[mid1-1];
	   }
	   if(mid2-1>=0){
		   l2=b[mid2-1];
	   }
	   if(l1<=r2 && l2<=r1){
            if(t%2==1){
				return max(l1,l2);
			}
			else{
				return(double)(max(l1,l2)+min(r1,r2))/2.0;
			}
	   }
	   else if(l1>r2){
		   high=mid1-1;
	   }
	   else{
		   low=mid1+1;
	   }

	}
return 0;
}
