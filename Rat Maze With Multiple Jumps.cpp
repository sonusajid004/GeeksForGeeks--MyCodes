
bool isSafe(int i,int j,int n,vector<int> m[])
{
    return i<n && j<n && m[i][j]>0;
}

bool solveMaze(int n,int i,int j,vector<int> m[],vector<vector<int>> &sol)
{
    if(i==n-1 && j==n-1){sol[i][j]=1;return true;}
    
    if(isSafe(i,j,n,m))
    {
        int t = m[i][j];
        sol[i][j]=1;
        for(int l = 1;l<=t;l++)
        {
            if(solveMaze(n,i,j+l,m,sol))return true;
            if(solveMaze(n,i+l,j,m,sol))return true;
        }
        sol[i][j]=0;
    }
    return false;
    
}


void solve(int n, vector<int> maze[]) {
    // write code here
    
   vector<vector<int>> sol(n,vector<int>(n,0));
    
    if(solveMaze(n,0,0,maze,sol))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else cout<<-1<<endl;
    
    
    
    
    
    
    
}
