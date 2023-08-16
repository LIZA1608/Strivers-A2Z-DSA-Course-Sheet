  string removeOuter(string& s) {
        // code here
        int n=s.length();
        string ans="";
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' && count==0){
                count++;
            }
            else if(s[i]=='(' && count>=1){
                ans+=s[i];
                count++;
                }
                else if(s[i]==')' && count>1){
                    ans+=s[i];
                    count--;
                }
                else if(s[i]==')' && count==1){
                    count--;
                }
        }
        return ans;
    }
