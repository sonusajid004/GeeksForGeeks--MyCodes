//
// Created by ashutosh on 26/8/18.
//

#include<iostream>
#include<stack>
using namespace std;
int performTheOperation(char c,int op1,int op2){
    switch(c){
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            return op1/op2;
    }
}
int main(){
    int t;
    cin>>t;
    cin.get();
    while(t--){
        //enter the expression
        string s;
        getline(cin,s);
        stack<int> s1;
        int n=s.length();
        for(int i=0;i<n;i++){
            //pahle check kar lo if it is an operator
            if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/'){
                //pop the 2 operand from the stack
                int op2=(s1.top());
                s1.pop();
                int op1=(s1.top());
                s1.pop();
                int res=performTheOperation(s[i],op1,op2);
                s1.push(res);
            }
            else{
                s1.push((s[i]-'0'));
            }
        }
        cout<<(s1.top())<<endl;

    }

    return 0;
}

