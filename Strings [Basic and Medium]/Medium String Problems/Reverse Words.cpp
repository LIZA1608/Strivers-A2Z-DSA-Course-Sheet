 string reverseWords(string s) {
     int n=s.length();
     string ans="";
     for(int i=n-1;i>=0;i--){
             if(s[i]==' '){
                 continue;
             }
             else{
                 string word="";
                 while(i>=0 && s[i]!=' '){
                     word+=s[i];
                     i--;
                 }
                 reverse(word.begin(),word.end());
                 if(ans.length()==0){
                     ans.append(word);
                 }
                 else{
                     ans+=' ';
                     ans.append(word);
                 }

             }
     } 
     return ans;  
    }
