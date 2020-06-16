#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* a[26];
    bool isEnd;
    node()
    {
        for(int i=0;i<26;i++)
        a[i]=NULL;
        isEnd = false;
    }
};

void insert(node* head,string s)
{
    node* tem = head;
    for(int i=0;i<s.length();i++)
    {
        int id = s[i]-'a';
        if(!tem->a[id])
        tem->a[id]=new node();
        tem = tem->a[id];
    }
    tem->isEnd = true;
}
bool search(node* head,string s)
{
    node *tem = head;
    for(int i=0;i<s.length();i++)
    {
        int id = s[i]-'a';
        if(!tem->a[id])
        return false;
        tem = tem->a[id];
    }
    if(tem)
    return tem->isEnd;
    else return false;
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
	    node* head= new node();
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        insert(head,s);
	    }
	    string s;
	    cin>>s;
	    cout<<search(head,s)<<endl;
	}
	return 0;
}
