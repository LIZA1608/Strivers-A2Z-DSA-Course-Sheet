//second approch->
string reverseWords (string s)
    {
            int f=0,l=-1;
        for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            reverse(s.begin()+f,s.begin()+i);
            f=i+1;
        }
    }
    reverse(s.begin()+f,s.end());
    return s;
    }
// first approch->
    string reverseWords (string s)
    {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                if(i>0 && s[i-1]=='.'){
                    ans+=".";
                }
                continue;
            }
            else{
                string word="";
                while(i<n && s[i]!='.'){
                    word+=s[i];
                    i++;
                }
                reverse(word.begin(),word.end());
                if(ans.length()==0){
                    ans.append(word);
                }
                else{
                    ans+=".";
                    ans.append(word);
                }
            }
        }
        return ans;
    }
