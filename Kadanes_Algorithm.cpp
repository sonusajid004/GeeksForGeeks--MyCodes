int maxSubarraySum(int a[], int n){
    
    // Your code here
    int m=a[0],sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum = max(a[i],sum+a[i]);
        m = max(m,sum);
    }
    return m;
    
    
}
