void subarraySum(int a[], int n, int s){
    
    // Your code here
    int sum=0,l=0,r=0;
   while(l<n && r<n)
    {
        sum+=a[r++];
        while(sum>s && l<(r))
        {
            sum-=a[l++];
        }
        
        if(sum==s)
        {
            cout<<l+1<<" "<<r;
            return;
        }
       //cout<<sum<<" "<<l<<" "<<r<<endl;
    }
    cout<<-1;
    
    
}
