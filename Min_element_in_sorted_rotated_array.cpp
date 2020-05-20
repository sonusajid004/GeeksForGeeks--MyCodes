#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int l,int r,int n)
{
    while(l<=r)
    {
         int mid = l + (r-l)/2;
        //  cout<<mid<<" "<<l<<" "<<r<<endl;
       
        if((mid==0 || a[mid-1]>a[mid])&&(mid == n-1 || a[mid+1]>a[mid]))
        return a[mid];
        if(a[r]<a[mid])
        l = mid +1;
        else r =mid -1;
        
      
    }
    return -1;
}
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for_each(a,a+n,[](int &x){cin>>x;});
	    cout<<fun(a,0,n-1,n)<<endl;
	}
	
	return 0;
}
