    string largestOddNumber(string s) {
int n=s.length();
int high=n;
string ans="";
for(int i=n-1;i>=0;i--){
    if(s[i]%2!=0){
        break;
    }
    high--;
}
for(int i=0;i<high;i++){
    ans+=s[i];
}
//ans+='\0';
return ans;
    }
