int helper(string str,int k){
     int i=0,j=0,currcount=0;
    int res=0;
    vector<int>count(26,0);
    while(j<str.size()){
        int index=str[j]-'a';
        count[index]+=1;
        if(count[index]==1){
            currcount++;
        }
        while(currcount>k){
            count[str[i]-'a']--;
            if(count[str[i]-'a']==0){
                currcount--;
            }
            i++;
        }
        res+=(j-i+1);
        j++;
    }
    return res;
}
int countSubStrings(string str, int k) 
{
    // Write your code here.
   int ans=helper(str,k)-helper(str,k-1);
   return ans;
}
