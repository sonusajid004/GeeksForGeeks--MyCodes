//https://practice.geeksforgeeks.org/problems/smallest-number-subset/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int res = 0;
        for(int i=0;i<n ; i++)
        {
            if(res+1<a[i])
            {
                break;
            }
            res+=a[i];
        }
        cout<<res+1<<endl;
    }
}
