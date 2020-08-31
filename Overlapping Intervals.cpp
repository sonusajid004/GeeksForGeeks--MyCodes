//https://practice.geeksforgeeks.org/problems/overlapping-intervals/0


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
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v[i]={x,y};
        }
      
        vector<pair<int,int>> res;
        sort(v.begin(),v.end(),comp);
        
        
        res.push_back(v[0]);
        int c = 0;
        for(int i=1;i<v.size();i++)
        {
            if(res[c].second>=v[i].first)
            {
                res[c].second = max(v[i].second,res[c].second);
                res[c].first = min(v[i].first,res[c].first);
            }
            else
            {
                res.push_back(v[i]);
                c++;
            }
        }
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i].first<<" "<<res[i].second<<" ";
        }
        cout<<"\n";
        
    }
}
