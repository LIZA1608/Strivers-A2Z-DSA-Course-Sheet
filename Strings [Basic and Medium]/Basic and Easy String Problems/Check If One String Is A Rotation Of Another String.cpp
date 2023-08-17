 bool areRotations(string s1,string s2)
    {
        int n=s1.length();
        int m=s2.length();
        if(n!=m) return false;
        string ans=s1+s1;
        if(ans.find(s2)!=string::npos){
            return true;
        }
        return false;
    }
