//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0


#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    
	    int *a = new int[n1];
	    int *b = new int[n2];
	    for_each(a,a+n1,[](int &x){cin>>x;});
	    for_each(b,b+n2,[](int &x){cin>>x;});
	    if(n2<n1)
	    {
	        swap(a,b);
	        swap(n1,n2);
	    }
	    int mod = max(a[n1-1],b[n2-1])+1;
	    
	    int k = 0;
	    int i=0,j=0;
	    while(i<n1 && j<n2)
	    {
	        if(a[i]%mod<b[j]%mod)
	        {
	            if(k<n1)
	            {
	                a[k]+=(a[i++]%mod)*mod;
	            }
	            else
	            {
	                b[k-n1]+=(a[i++]%mod)*mod;
	            }
	        }
	        else
	        {
	            if(k<n1)
	            {
	                a[k]+=(b[j++]%mod)*mod;
	            }
	            else
	            {
	                b[k-n1]+=(b[j++]%mod)*mod;
	            }
	        }
	        k++;
	    }
	    while(i<n1)
	    {
	        if(k<n1)
	            {
	                a[k]+=(a[i++]%mod)*mod;
	            }
	            else
	            {
	                b[k-n1]+=(a[i++]%mod)*mod;
	            }
	            k++;
	    }
	    while(j<n2)
	    {
	         if(k<n1)
	            {
	                a[k]+=(b[j++]%mod)*mod;
	            }
	            else
	            {
	                b[k-n1]+=(b[j++]%mod)*mod;
	            }
	            k++;
	    }
	   i=0,j=0;
	   while(i<n1)
	   {
	       cout<<a[i++]/mod<<" ";
	   }
	   while(j<n2)
	   {
	       cout<<b[j++]/mod<<" ";
	   }
	   cout<<"\n";
	    
	}
}
