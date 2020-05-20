void countEleLessThanOrEqual(int a1[], int a2[], 
                             int m, int n)
{
//Your code goes here
    sort(a2,a2+n);
    int res =0 ;
    for(int i=0;i<m;i++)
    {
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(a2[mid]<=a1[i])
            l = mid + 1;
            else r =mid -1;
        }
    cout<<l<<" ";
    }
    
}
