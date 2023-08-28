 int maxDepth(string s) {
        int n=s.length();
        int d=0,maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                d++;
            }
            if(s[i]==')'){
                d--;
            }
            maxi=max(maxi,d);
        }
        return maxi;
    }
