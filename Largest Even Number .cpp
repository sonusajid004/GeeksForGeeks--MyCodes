//https://practice.geeksforgeeks.org/problems/largest-even-number/0


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
        string s;
        cin>>s;
        int n = s.length();
        int a[10]{};
        for(int i=0;i<s.length();i++)
        a[s[i]-'0']++;
        
        string tem = "",res = "";
        for(int i=0;i<10;i+=2)
        {
            if(a[i]>0)
            {
                tem+=to_string(i);
                a[i]--;
                break;
            }
        }
        for(int i=9;i>=0;i--)
        {
            while(a[i]>0)
            {
                res+=to_string(i);
                a[i]--;
                
            }
        }
        cout<<res+tem<<endl;
    }
}
