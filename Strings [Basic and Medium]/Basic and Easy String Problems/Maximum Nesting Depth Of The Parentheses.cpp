int maxDepth(string s) {
	// Write your code here.
	int n=s.length();
	int c=0;
	int maxi=0;
	for(int i=0;i<n;i++){
		if(s[i]=='('){
               c++;
		//	   cout<<c<<" "<<"+"<<endl;
		}
		if(s[i]==')'){
			c--;
	//		cout<<c<<" "<<"-"<<endl;
		}
		maxi=max(maxi,c);
	//	cout<<maxi<<" "<<"="<<endl;
	}
	return maxi;
}
