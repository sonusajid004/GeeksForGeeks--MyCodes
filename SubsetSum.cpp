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
        int n;
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
        if(sum%2)
        {
            cout<<"NO\n";
        }
        else
        {
           
            sum=sum/2;
            bool dp[n+1][sum+1];
            for(int i=0;i<=sum;i++)
            dp[0][i]=0;
            for(int i=0;i<=n;i++)
            dp[i][0]=1;
            
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=sum;j++)
                {
                    dp[i][j] = dp[i-1][j];
                    if(a[i-1]<=j)
                    {
                        dp[i][j]|=dp[i-1][j-a[i-1]];
                    }
                }
            }
             if(dp[n][sum])
            cout<<"YES\n";
            else cout<<"NO\n";
                    }
        
    }
	    
	    
	    
	    
	
	return 0;
}
