vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                            int q) {
    // code here
    
    
    int left[n],right[n],ll=0,lr=n-1;
    left[0]=0;
    right[n-1]=n-1;
    for(int i=1,j=n-2;i<n&&j>=0;i++,j--)
    {
        if(a[i]>a[i-1])
        {
            ll=i;
        }
        if(a[j]>a[j+1])
        {
            lr=j;
        }
        left[i]=ll;
        right[j]=lr;
    }
    vector<bool> v;
    for(auto &i:queries)
    {
        int l=i.first;
        int r = i.second;
        if(right[l]>=left[r])
        {
            v.push_back(true);
        }
        else
        {
                        v.push_back(false);
        }
    }
    return v;
}
