class Solution {
public:
vector<int>gener(int row){
    long long ans=1;
    vector<int>a;
    a.push_back(1);
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        a.push_back(ans);
    }
    return a;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        for(int i=1;i<=numRows;i++){
            a.push_back(gener(i));
        }
        return a;
    }
};
