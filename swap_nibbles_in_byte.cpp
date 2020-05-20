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
	    cout<<(((n&0xf)<<4)|((n>>4)&0xff))<<endl;
	}
	return 0;
}
