// without using stack-> T.C-->O(N) AND S.C->O(1)
int minAddToMakeValid(string s) {
     int n=s.length();
     int ans=0;
     int c=0;
     if(n==0) return 0;
     for(int i=0;i<n;i++){
         if(s[i]=='('){
             c++;
         }
        else  if(s[i]==')'){
             c--;
         }
     if(c<0){
         ans++;
         c=0;
     }
     }
     return ans+c;   
    }
// using stack
  int minAddToMakeValid(string s) {
     int n=s.length();
     int ans=0;
     stack<int>st;
     for(int i=0;i<n;i++){
         if(s[i]=='(') st.push(s[i]);
         else if(s[i]==')'){
             if(!st.empty()) st.pop();
             else ans++;
         }
     }
     return ans+st.size();
    }
