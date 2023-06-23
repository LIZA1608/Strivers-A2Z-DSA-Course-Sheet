int findmax(vector<int>arr,int n){
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
		}
	}
	return maxi;
}
int findmin(vector<int>arr,int n){
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<mini){
			mini=arr[i];
		}
	}
	return mini;
}
bool bloom(vector<int>arr,int day,int m,int k){
	int c=0;
	int nu=0;
	int n=arr.size();
	for(int i=0;i<n;i++){
		if(arr[i]<=day){
			c++;
		}
		else{
			nu+=(c/k);
			c=0;
		}
	}
	nu+=(c/k);
	if(nu>=m){
		return  true;
	}
	return false;
}
int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int n=arr.size();
	if(m*k>n){
		return -1;
	}
	int low=findmin(arr,n);
	int high=findmax(arr,n);
	int ans=high;
	while(low<=high){
		int mid=(low+high)/2;
      if(bloom(arr, mid, m,k)==true){
                  ans=mid;
				  high=mid-1;
	  }
	  else{
		  low=mid+1;
	  }
	}
	return low;
}
