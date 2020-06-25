
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




long long fun(int c[],int n,int v)
{
   long long dp[v+1];
   for(int i=0;i<v+1;i++)
   dp[i]=INT_MAX;
   dp[0]=0;
   for(int i=1;i<=v;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(c[j]<=i)
           {
               dp[i]=min(dp[i],1+dp[i-c[j]]);
           }
       }
   }
   return dp[v];
}






//Complete this function
long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
{
   return fun(coins,numberOfCoins,value);
}

// { Driver Code Starts.



int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int value;
	    cin>>value;
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    
	    int answer=minimumNumberOfCoins(coins,numberOfCoins,value);
	    if(answer==INT_MAX)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
