long long int floorSqrt(long long int x) 
{
    // Your code goes here  
    int l=1,r=x,res;
    while(l<=r)
    {
        long long int m= l+(r-l)/2;
        if(m*m == x)
        {
            return m;
        }
        else if(m*m < x)
        {
            res=m;
            l=m+1;
        }
        else r=m-1;
    }
    return res;
}
