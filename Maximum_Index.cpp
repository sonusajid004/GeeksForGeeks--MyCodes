int maxIndexDiff(int a[], int n) 
{ 
    
    // Your code here
    int r[n];
    r[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i] = max(a[i],r[i+1]);
    }
    int i=0,j=0,res=0;
    while(i<n&&j<n)
    {
        if(a[i]<=r[j])
        {
           
            res = max(res,j-i);
             j++;
        }
        else i++;
    }
    return res;
    
}
