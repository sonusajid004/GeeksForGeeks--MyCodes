#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m][n];
	    for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    cin>>a[i][j];
	    
	    int b[m][n]{},res = INT_MIN;
	    for(int i=0;i<m;i++)
	    b[i][0]=a[i][0],res = max(res,b[i][0]);
	    
	    for(int i=0;i<n;i++)
	    b[0][i]=a[0][i],res = max(res,b[0][i]);
	    
	    for(int i=1;i<m;i++)
	    {
	        for(int j=1;j<n;j++)
	        {
	            if(a[i][j]){
	            b[i][j] = min(b[i][j-1],min(b[i-1][j],b[i-1][j-1]))+1;
	            res = max(res,b[i][j]);
	            }
	            else b[i][j]=0;
	        }
	    }
	  
	    cout<<res<<endl;
	    
	    
	    
	    
	    
	    
	    
	    
	}
	
	return 0;
}
