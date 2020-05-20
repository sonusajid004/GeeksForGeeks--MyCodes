int findExtra(int a[], int b[], int n) {
    // add code here.
    int l=0,r = n-1,res;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(a[mid]==b[mid])
        {
            l = mid +1;
        }
        else 
        {
            res = mid;
            r = mid -1;
        }
    }
    return res;
}
