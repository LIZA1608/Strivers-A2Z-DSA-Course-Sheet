int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int ans=n;
	int s=0;
	int e=n-1;
	while(s<=e){
		int m=s+(e-s)/2;
		if(arr[m]>x){
			ans=m;
			e=m-1;
		}
		else{
			s=m+1;
		}
	}
	return ans;
}
