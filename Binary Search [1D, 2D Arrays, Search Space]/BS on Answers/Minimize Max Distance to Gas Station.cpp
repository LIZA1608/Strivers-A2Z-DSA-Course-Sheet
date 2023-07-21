//
//using priority queue with tc->nlogn+klogn
#include<bits/stdc++.h>
long double minimiseMaxDistance(vector<int> &arr, int k){
int n=arr.size();
vector<int>howMany(n-1,0);
priority_queue<pair<long double,int>>pq;
for(int i=0;i<n-1;i++){
	pq.push({arr[i+1]-arr[i],i});
}
for(int gasStation=1;gasStation<=k;gasStation++){
	auto tp=pq.top();
	pq.pop();
	int sectionIndex=tp.second;
	howMany[sectionIndex]++;
	long double iniDiff=arr[sectionIndex+1]-arr[sectionIndex];
	long double newSection=iniDiff/(long double)(howMany[sectionIndex]+1);
	pq.push({newSection,sectionIndex});
}
return pq.top().first;
}

//brute force approch
long double minimiseMaxDistance(vector<int> &arr, int k){
int n=arr.size();
vector<int>howMany(n-1,0);
for(int gasstation=1;gasstation<=k;gasstation++){
	long double maxSection=-1;
	int maxInd=-1;
	for(int i=0;i<n-1;i++){
		long double diff=(arr[i+1]-arr[i]);
		long double sectionLength=diff/(long double)(howMany[i]+1);
		if(sectionLength>maxSection){
			maxSection=sectionLength;
			maxInd=i;
		}
	}
	howMany[maxInd]++;
}
long double maxAns=-1;
for(int i=0;i<n-1;i++){
long double diff=(arr[i+1]-arr[i]);
long double sectionLength=diff/(long double)(howMany[i]+1);
maxAns=max(maxAns,sectionLength);
}
return maxAns;
}
