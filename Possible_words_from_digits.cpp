string d[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//Complete this function
void fun(int a[],int N,int id,string s)
{
    if(id == N)
    {
        cout<<s<<" ";
        return;
    }
    for(int i=0;i<d[a[id]].length();i++)
    {
        fun(a,N,id+1,s+string(1,d[a[id]][i]));
    }
    
}

void possibleWords(int a[],int N)
{
    //Your code here
    
    fun(a,N,0,"");
}
