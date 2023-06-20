pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	sort(arr,arr+n);
int ans=-1;
int ceil=-1;
int s=0;
int e=n-1;
while(s<=e){
	int m=s+(e-s)/2;
	if(arr[m]==x){
		ans=arr[m];
		ceil=arr[m];
		return {ans,ceil};
	}
	else if(arr[m]<x){
		ans=arr[m];
		s=m+1;
	}
	else{
		ceil=arr[m];
		e=m-1;
	}
}
return {ans,ceil};
}
