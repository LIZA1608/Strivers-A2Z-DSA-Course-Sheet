void find(int ind,int t,vector<int>&a,vector<vector<int>>&ans,vector<int>&ds){
        if(t==0){
            ans.push_back(ds);
        return;
        }
    for(int i=ind;i<a.size();i++){
    if(i>ind &&a[i]==a[i-1]) continue;
    if(a[i]>t) break;
        ds.push_back(a[i]);
        find(i+1,t-a[i],a,ans,ds);
        ds.pop_back();
    }
  
}
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
    sort(a.begin(),a.end());
        vector<int>ds;
        vector<vector<int>>ans;
        find(0,t,a,ans,ds);
        return ans;
    }
