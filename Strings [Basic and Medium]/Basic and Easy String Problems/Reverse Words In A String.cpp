string reverseString(string &str){
	// Write your code here.
    int n=str.length();
    string ans="";
    for(int i=n-1;i>=0;i--){
        if(str[i]==' '){
            continue;
        }
        else{
            string word="";
            while(i>=0 && str[i]!=' '){
                word+=str[i];
                i--;
            }
            reverse(word.begin(),word.end());
            if(ans.length()==0){
                ans.append(word);
            }
            else{
                ans+=" ";
                ans.append(word);
            }
        }
    }	
    return ans;
}
