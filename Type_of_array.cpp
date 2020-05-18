#include<bits/stdc++.h>
using namespace std;
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
	    for(int i=0;i<n;i++)cin>>a[i];
	    int l=0,r=0;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]>a[i-1])
	        {
	            l++;
	        }
	        if(a[i]<a[i-1])
	        {
	            r++;
	        }
	    }
	    int m = *max_element(a,a+n);
	    if(l==n-1)
	    {
	        cout<<m<<" "<<1<<endl;
	    }
	    else if(r==n-1)
	    {
	        cout<<m<<" "<<2<<endl;
	    }
	    else if(r==n-2 && l==1 && a[0]<a[n-1])
	    {
	        cout<<m<<" "<<3<<endl;
	    }
	    else
	    {
	        cout<<m<<" "<<4<<endl;
	    }
	  //  cout<<r<<" "<<l<<endl;
	}
	return 0;
}
