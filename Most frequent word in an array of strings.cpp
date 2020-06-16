#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string res ="";
	    int f = 0;
	    unordered_map<string,int> m,m1;
	    vector<string> v;
	    while(n--)
	    {
	        string s;
	        cin>>s;
	        m[s]++;
	        v.push_back(s);
	    }
	    for(int i=0;i<v.size();i++)
	    {
	        m1[v[i]]++;
	        if(m[v[i]]>f )
	        {
	            f=m[v[i]];
	            res = v[i];
	        }
	        else if(m[v[i]]==f && m1[v[i]]==1)
	        {
	            res = v[i];
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
