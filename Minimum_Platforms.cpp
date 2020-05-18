int findPlatform(int a[], int d[], int n)
{
	// Your code here
    int b[2401]{};
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
        b[d[i]+1]--;
    }
    int m = b[0];
    for(int i=1;i<=2400;i++)
    {
        b[i]+=b[i-1];
        m = max(b[i],m);
    }
    return m;
    
    
}
