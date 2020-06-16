#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* a[26];
    bool isEnd;
    int count;
    node()
    {
        for(int i=0;i<26;i++)
        a[i]=NULL;
        isEnd = false;
        count = 0;
    }
};

void insert(node* head,string s)
{
    node* tem = head;
    bool flag = false;
    string res="";
    for(int i=0;i<s.length();i++)
    {
        int id = s[i]-'a';
        res= res + string(1,s[i]);
        if(!tem->a[id])
        {
            if(!flag)
            {
                cout<<res;
                flag = true;
            }
            tem->a[id]= new node();
        }
        tem=tem->a[id];
    }
    tem->isEnd=true;
    tem->count++;
    if(!flag)
    {
        cout<<s<<" ";
        if(tem->count>1)
        cout<<tem->count;
    }
}
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
	    node* head = new node();
	    while(n--)
	    {
	        string s;
	        cin>>s;
	        insert(head,s);
	        cout<<"\n";
	    }
	}
	return 0;
}
