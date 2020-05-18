int trappingWater(int a[], int n){

    // Your code here
    int res = 0;
    int left[n],right[n];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1,j=n-2;i<n;i++,j--)
    {
        left[i]=max(a[i],left[i-1]);
        right[j]=max(a[j],right[j+1]);
    }
    for(int i=1;i<n-1;i++)
    {
        res+=min(left[i],right[i])-a[i];
    }
    return res;
    
}
