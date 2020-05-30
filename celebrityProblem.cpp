int getId(int M[MAX][MAX], int n)
{
    //Your code here
    stack<int> s;
    for(int i=0;i<n;i++)
    s.push(i);
    int a = s.top();
    s.pop();
    int b = s.top();
    s.pop();
    if(n==2)
    {
        if((M[a][b] && !M[b][a]))
        return b;
        else if((M[b][a] && !M[a][b]))
        return a;
        else
        {
            return -1;
        }
        
    }
    while(s.size()>1)
    {
        if(M[a][b])
        {
            a = s.top();
            s.pop();
        }
        else
        {
            b = s.top();
            s.pop();
        }
    }
   
    int c = s.top();
    s.pop();
    if(M[c][a])
    c = a;
    if(M[c][b])
    c=b;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(i!=c && (M[c][i] || !M[i][c] ))
        {
           return -1;
        }
    }
    return c;
}
