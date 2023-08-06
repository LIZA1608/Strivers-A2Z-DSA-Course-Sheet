//best->Moores Voting Algorithim->O(N)
int majorityElement(vector<int> v) {
	// Write your code here
	int cnt=0;
	int el;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			el=v[i];
		}
		else if(v[i]==el){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0;i<n;i++){
                if (v[i] == el) {
                        cnt1++;
                }
        }
                if(cnt1>n/2){
			return el;
		}
		return -1;
	
}
//hashing O(NLogN) S.C->O(N)
#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	map<int,int>mp;
	int n=v.size();
	for(int i=0;i<n;i++){
		mp[v[i]]++;
	}
	for(auto it:mp){
		if(it.second>n/2){
			return it.first;
		}
	}
	return -1;
}
//brute force->O(N^2)
int majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(v[i]==v[j]){
				cnt++;
			}
			
		}
		if(cnt>n/2) return v[i];
	}
	return -1;
}
