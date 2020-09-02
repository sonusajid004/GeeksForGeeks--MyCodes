//https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-k-times/

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int dp[k+1][n];
        for(int i=0;i<n;i++)
        dp[0][i]=0;
        for(int i=0;i<=k;i++)
        dp[i][0]=0;
        
        for(int i=1;i<=k;i++)
        {
            int prevDiff = INT_MIN;
            for(int j=1;j<n;j++)
            {
                prevDiff = max(prevDiff , dp[i-1][j-1]-a[j-1]);
                dp[i][j] = max(dp[i][j-1],prevDiff+a[j]);
            }
        }
        
        cout<<dp[k][n-1]<<endl;
    }
}
