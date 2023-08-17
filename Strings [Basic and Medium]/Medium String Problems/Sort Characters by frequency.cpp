string frequencySort(string s) {
        int n=s.length();
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<pair<int,char>>v;
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++){
            while(v[i].first--){
                ans+=v[i].second;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
