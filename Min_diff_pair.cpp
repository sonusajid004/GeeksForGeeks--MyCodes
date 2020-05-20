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
        int a[n];
        for_each(a,a+n,[](int &x){cin>>x;});
        sort(a,a+n);
        int diff = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<diff)
            {
                diff = a[i+1]-a[i];
            }
        }
        cout<<diff<<endl;
    }
	return 0;
}
