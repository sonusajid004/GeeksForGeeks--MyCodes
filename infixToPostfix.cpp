#include<bits/stdc++.h>
using namespace std;
int ord(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else return 0;
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
        string s;
        stack<char> s1;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            cout<<s[i];
            else
            {
                if(s1.empty())
                {
                    s1.push(s[i]);
                }
                else
                {
                    if(s[i]=='(')
                    {
                        s1.push(s[i]);
                    }
                    else if(s[i]==')')
                    {
                        while((!s1.empty())&&(s1.top()!='('))
                        {
                            cout<<s1.top();
                            s1.pop();
                        }
                        s1.pop();
                    }
                    else
                    {
                        while((!s1.empty())&&(ord(s[i])<=ord(s1.top()))){
                        
                        cout<<s1.top();
                        s1.pop();
                        }
                       s1.push(s[i]);
                        
                    }
                }
            }
        }
        while(!s1.empty())
        {
            cout<<s1.top();
            s1.pop();
        }
        cout<<endl;
    }
	return 0;
}
