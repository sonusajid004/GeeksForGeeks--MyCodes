int findFloor(vector<long long> a, long long n, long long x){
    
    // Your code here
    
    int l=0,r = n-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(a[mid] == x)
        return mid;
        if(a[mid]<x)
        {
            l = mid +1;
            
        }
        else r = mid -1;
    }
    return  l -1;
}
