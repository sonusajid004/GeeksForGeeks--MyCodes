long long fun(int c[],int n,int v)
{
    
   
    
    long long dp[v+1][n+1];
    for(int i=0;i<=v;i++)
    dp[i][0]=0;
    for(int i=0;i<=n;i++)
    dp[0][i]=1;
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(c[j-1]<=i)
            {
                dp[i][j]+=dp[i-c[j-1]][j];
            }
        }
    }
    return dp[v][n];
    
}


//User function Template for C++

//Complete this function
long long numberOfWays(int coins[],int numberOfCoins,int value)
{
    
    return fun(coins,numberOfCoins,value);
}
