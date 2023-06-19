//use XOR method
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
 long long n = a.size();
    int xr = 0;
    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i] ^ (i + 1);
    }
    
    int bitno = 0;
    while (true) {
        if ((xr & (1 << bitno)) != 0) {
            break;
        }
        bitno++;
    }
    
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] & (1 << bitno)) != 0) {
            one = one ^ a[i];
        } else {
            zero = zero ^ a[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if ((i & (1 << bitno)) != 0) {
            one = one ^ i;
        } else {
            zero = zero ^ i;
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == zero) {
            count++;
        }
    }
    
    if (count == 2) {
        return { zero, one };
    } else {
      return {one, zero};
    }
}

//use maths  T.C->O(N) S.c->O(1)
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    long long n=a.size();
    long long sum= (n*(n+1))/2;
    long long sum2= (n*(n+1)*(2*n+1))/6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        s2+=(long long )a[i]*(long long )a[i];
    }
    long long val1=s-sum;
    long long val2= s2-sum2;
    val2=val2/val1;
    long long x=(val1+val2)/2;
    long long y= x-val1;
    return {x,y};
}




//hashing approch tc->O(N) ,SC->O(N);

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
int n=a.size();
int hash[n+1]={0};
for(int i=0;i<n;i++){
    hash[a[i]]++;
}
int repeat=-1;
int missing=-1;
for(int i=1;i<=n;i++){
    if(hash[i]==2){
        repeat=i;
    }
    else if(hash[i]==0){
        missing=i;
    }

    if(repeat!=-1 && missing!=-1){
        break;
    }
}
return {repeat,missing};
}
