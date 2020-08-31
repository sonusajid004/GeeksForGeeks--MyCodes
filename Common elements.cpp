https://practice.geeksforgeeks.org/problems/common-elements/0


#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2,n3;
	    cin>>n1>>n2>>n3;
	    
	    int a[n1],b[n2],c[n3];
	    for_each(a,a+n1,[](int &x){cin>>x;});
	    for_each(b,b+n2,[](int &x){cin>>x;});
	    for_each(c,c+n3,[](int &x){cin>>x;});
	    
	    int p1=0,p2=0,p3=0;
	    
	    vector<int> res;
	    
	    while(p1<n1 && p2<n2 && p3<n3)
	    {
	        if(a[p1]==b[p2] && b[p2]==c[p3])
	        {
	            res.push_back(a[p1]);
	            int tem = a[p1];
	            while(p1<n1 && a[p1]==tem)p1++;
	            while(p2<n2 && b[p2]==tem)p2++;
	            while(p3<n3 && c[p3]==tem)p3++;
	            
	        }
	        else if(a[p1]<=b[p2] && a[p1]<=c[p3])
	        {
	            int tem = a[p1];
	           while(p1<n1 && a[p1]==tem)p1++;
	           while(p2<n2 && b[p2]==tem)p2++;
	            while(p3<n3 && c[p3]==tem)p3++;
	            
	           
	        }
	        else if(b[p2]<=a[p1] && b[p2]<=c[p3])
	        {
	            int tem = b[p2];
	           while(p1<n1 && a[p1]==tem)p1++;
	           while(p2<n2 && b[p2]==tem)p2++;
	            while(p3<n3 && c[p3]==tem)p3++;
	            
	        }
	        else 
	        {
	             int tem = c[p3];
	           while(p1<n1 && a[p1]==tem)p1++;
	           while(p2<n2 && b[p2]==tem)p2++;
	            while(p3<n3 && c[p3]==tem)p3++;
	            
	        }
	    }
	    
	    if(res.size()!=0){
	    for(auto i:res)
	    {
	        cout<<i<<" ";
	    }
	    }else cout<<-1;
	    cout<<endl;
	}
}
