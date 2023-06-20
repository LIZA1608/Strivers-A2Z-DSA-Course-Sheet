int lowerBound(vector<int> a, int n, int x) {
	// Write your code herein

	int s=0;
	int e=n-1;
	int ans=n;
	while(s<=e){
		int m=s+(e-s)/2;
		if(a[m]>=x){
			ans=m;
			e=m-1;
		}
		else{
			s=m+1;
		}
	}
	return ans;
}
