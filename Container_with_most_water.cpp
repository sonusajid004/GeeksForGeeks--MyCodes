long long maxArea(long long a[], int len)
{
    // Your code goes here
    int l=0,r=len-1;
    long long res =-1;
    while(l<=r)
    {
        res = max(res,min(a[l],a[r])*(r-l));
        if(a[l]<a[r])
        {
            l++;
        }
        else r--;
    }
    return res;
}
