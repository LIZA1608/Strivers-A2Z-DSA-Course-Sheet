vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int cnt1=0,cnt2=0;
	int e1,e2;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(cnt1==0 && v[i]!=e2){
			cnt1=1;
			e1=v[i];
		}
		else if(cnt2==0 && v[i]!=e1){
			cnt2=1;
			e2=v[i];
		}
		else if(v[i]==e1){
			cnt1++;
		}
		else if(v[i]==e2){
			cnt2++;
		}
		else{
			cnt1--;
			cnt2--;
		}
	}
	vector<int>ans;
	int c=0,t=0;
	for(int i=0;i<n;i++){
		if(v[i]==e1){
			c++;
		}
		if(v[i]==e2){
         t++;
		}
	}
	if(c>(n/3)){
		ans.push_back(e1);
	}
	if(t>(n/3)){
		ans.push_back(e2);
	}
	return  ans;
}
