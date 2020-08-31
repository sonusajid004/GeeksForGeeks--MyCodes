// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0

#include <bits/stdc++.h>

using namespace std;


bool comp(pair<int,int> &a,pair<int,int> &b)
{
    return a.first<b.first;
}


int main() {
   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int c = 0;
        for(int i=0;i<n;i++)
        if(a[i]<=k)
        c++;
        
        int b = 0;
        for(int i=0;i<c;i++)
        if(a[i]>k)
        b++;
        int ans = b;
        
        for(int i=c;i<n;i++)
        {
            if(a[i]>k)
            b++;
            
            if(a[i-c]>k)
            b--;
            
            ans = min(ans,b);
        
            
        }
        cout<<ans<<endl;
        
    }
}
