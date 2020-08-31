// https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x/0

#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k1;
	   cin>>n>>k1;
	   ll a[n];
	   for(int i=0;i<n;i++)cin>>a[i];
	   ll ans = 0;
	   sort(a,a+n);
	   for(int i=0;i<n-2;i++)
	   {
	       int j= i+1,k = n-1;
	       while(j<k)
	       {
	           if(a[i]+a[j]+a[k]>=k1)
	           {
	               k--;
	           }
	           else
	           {
	               ans+=(k-j);
	               j++;
	           }
	       }
	   }
	   cout<<ans<<endl;
	    
	}
}
