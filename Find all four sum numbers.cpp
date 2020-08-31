//https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers/0
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(n<=3)
	    {
	        cout<<"-1\n";
	        continue;
	    }
	    else
	    {
	        set<vector<int>> res;
	        unordered_map<int,pair<int,int>> m;
	        for(int i=0;i<n-1;i++)
	        {
	            for(int j = i+1;j<n;j++)
	            {
	                m[a[i]+a[j]]={i,j};
	            }
	        }
	        
	        for(int i=0;i<n-1;i++)
	        {
	            for(int j=i+1;j<n;j++)
	            {
	                int sum = a[i]+a[j];
	                if(m.find(k-sum)!=m.end())
	                {
	                    auto it = m[k-sum];
	                    if(it.first!=i && it.second!=j && it.second!=i && it.first!=j)
	                    {
	                        vector<int> s;
	                        s.push_back(a[it.first]);
	                        s.push_back(a[it.second]);
	                        s.push_back(a[i]);
	                        s.push_back(a[j]);
	                        sort(s.begin(),s.end());
	                        res.insert(s);
	                    }
	                }
	            }
	        }
	        
	        for(auto i:res)
	        {
	            for(auto j:i)
	            {
	                cout<<j<<" ";
	            }
	            cout<<"$ ";
	        }
	        cout<<endl;
	        
	    }
	}
}
