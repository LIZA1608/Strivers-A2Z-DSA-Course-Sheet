string commonPrefix(vector<string>& arr,int n){
	//Write your code here
	int m=arr[0].size();
	for(int i=1;i<n;i++){
        int j=0;
		while(j<arr[i].size() && arr[i][j]==arr[0][j]){
			j++;
		}
		m=min(m,j);
	}
	if(m==0){
		return "-1";
	}
	return arr[0].substr(0,m);
}
