int findMin(vector<int>& arr)
{
	// Write your code here.
	int s=0;
	int e=arr.size()-1;
	int n=arr.size();
	int ans=INT_MAX;
	while(s<=e){
		int m=s+(e-s)/2;
		if(arr[s]<=arr[m]){
			ans=min(ans,arr[s]);
			s=m+1;
		}
		else{
			e=m-1;
			ans=min(ans,arr[m]);
		}
	}
return ans;
}
