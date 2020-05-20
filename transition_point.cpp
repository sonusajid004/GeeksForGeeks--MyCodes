int transitionPoint(int a[], int n) {
    // code here
    int l=0,r=n-1;
    while(1)
    {
        if(l>r)
        return -1;
        int mid = (l+r)/2;
        if((a[mid]==1)&&(mid==0||(a[mid-1]==0)))
        {
            return mid;
        }
        if(a[mid]==1)
        r=mid-1;
        else l = mid +1;
        
        
    }
}
