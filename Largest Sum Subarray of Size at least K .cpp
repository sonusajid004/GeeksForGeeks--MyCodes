//https://practice.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k/0

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
        int a[n],maxi[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        
        int sum = 0;
        for(int i=0;i<k;i++)
        sum+=a[i];
        maxi[0]=a[0];
        int tem = a[0];
        
        for(int i=1;i<n;i++)
        {
            maxi[i]=max(a[i],a[i]+tem);
            tem=maxi[i];
        }
        int ans = sum;
        for(int i=k;i<n;i++)
        {
            sum = sum+a[i]-a[i-k];
            
            ans = max(ans,sum);
            ans = max(ans,sum+maxi[i-k]);
        }
        cout<<ans<<endl;
        
    }
}
