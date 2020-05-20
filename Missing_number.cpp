int MissingNumber(vector<int>& v, int n) {
    // Your code goes here
    int res = 0;
    for_each(v.begin(),v.end(),[&](int &x){res^=x;});
    for(int i=1;i<=n;i++)
    res^=i;
    return res;
    
    
}
