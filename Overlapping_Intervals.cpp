
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    return b.first > a.first;
    else 
    return a.second < b.second;
}

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> v, int n) {
    //code here
    sort(v.begin(),v.end(),cmp);
    
    for(int i=1;i<v.size();)
    {
        
        if(v[i].first<=v[i-1].second)
        {
           
            v[i-1].first = min(v[i].first,v[i-1].first);
            v[i-1].second = max(v[i].second,v[i-1].second);
            v.erase(v.begin()+i);
            
        }
        else i++;
    }
    
    return v;
}
