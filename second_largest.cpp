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
	    for_each(a,a+n,[](int &x){cin>>x;});
	    if(n<2)
	    {
	        cout<<-1<<endl;
	    }
	    int id1=max(a[0],a[1]);
	    int id2 = min(a[0],a[1]);
	    for(int i=2;i<n;i++)
	    {
	        if(a[i]>id1)
	        {
	            id2 = id1;
	            id1 = a[i];
	        }
	        if(a[i]>id2 && id1!=a[i])
	        {
	            id2= a[i];
	        }
	    }
	    if(id1==id2)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    cout<<id2<<endl;
	}
	
	return 0;
}
