//hashing with array t.c->o(n) ,s.c->o(1);
 bool isAnagram(string s, string t) {
      int count[26]={0};
      for(char x:s){
          count[x-'a']++;
      }
      for(char x:t){
          count[x-'a']--;
      }
      for(int val:count){
          if(val!=0){
              return false;
          }
      }
          return true;
      }
//hashing table t.c-> o(n) ,s.c->(o(n))
   bool isAnagram(string s, string t) {
      unordered_map<char,int>m;
      for(auto nx:s){
          m[nx]++;
      }
for(auto x:t){
    m[x]--;
}
for(auto x:m){
    if(x.second!=0){
        return false;
    }
}
return true;
    }
//brute force t.c->o(nlogn)
 bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
     if(s==t){
         return true;
     }   
     return false;
    }
