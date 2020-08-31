//https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k/0
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,k;
        cin>>n>>k;
        ll int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        unordered_map<int,int> m;
        int res = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            
            if(sum%k == 0)
            {
                res = max(res,i+1);
            }
            else
            {
                int tem;
                tem= (sum%k+k)%k;
                
                if(m.find(tem)==m.end())
                m[tem]=i;
                else
                {
                    res = max(res,i-m[tem]);
                }
                
                
            }
            
        }
        cout<<res<<endl;
        
        
        
        
    }
}
