bool areIsomorphic(string &str1, string &str2)
{
    int n=str1.length();
    int m=str2.length();
    if(n!=m){
        return false;
    }
    map<char,char>m1;
    map<char,char>m2;
    for(int i=0;i<n;i++){
       if(m1[str1[i]]==0 && m2[str2[i]]==0){
           m1[str1[i]]=str2[i];
           m2[str2[i]]=str1[i];
       }
    }
    for(int i=0;i<n;i++){
        if(m1[str1[i]]!=str2[i]){
            return false;
        }
    }
    return true;
}
