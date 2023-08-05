//2-pointer approch->O(NlogN)+O(N)
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0;
    int right=n-1;
    sort(book.begin(),book.end());
    while(left<=right){
        int sum=book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
    return "NO";
}

//Hashing-> O(N log N) ,Space->O(N)
#include<bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a=book[i];
        int more=target-a;
        if(mp.find(more)!=mp.end()){
            return "YES";
        }
        mp[a]=i;
    }
    return "NO";  
}
//Brute force approch->O(N^2)
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
