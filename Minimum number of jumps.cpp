#include<bits/stdc++.h>
using namespace std;

int fun(int a[],int n)
{
    if(n==1)return 0;
    int res = INT_MAX;
    for(int i=0;i<=n-2;i++)
    {
        if(i+a[i]>=n-1)
        {
            int sub_res = fun(a,i+1);
            if(sub_res !=INT_MAX)
            {
                //cout<<sub_res<<endl;
                res = min(res,sub_res+1);
            }
        }
    }
    return res;
}

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
        int n;
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++)cin>>a[i];
        
        int dp[n];
        for(int i=0;i<=n;i++)dp[i]=INT_MAX;
        dp[0]=0;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j+a[j]>=i)
                {
                    if(dp[j]!=INT_MAX)
                    {
                        dp[i] = min(dp[i],dp[j]+1); 
                    }
                }
            }
        }
        
        cout<<(dp[n-1]==INT_MAX?-1:dp[n-1])<<endl;
        
    }
	   
	    
	
	return 0;
}
