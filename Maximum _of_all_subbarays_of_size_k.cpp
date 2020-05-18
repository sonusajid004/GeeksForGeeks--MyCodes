deque<int> q;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && a[q.back()]<=a[i])
        q.pop_back();
        q.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<a[q.front()]<<" ";
        while(!q.empty() && q.front()<=i-k)
        q.pop_front();
        while(!q.empty() && a[q.back()]<=a[i])
        q.pop_back();
        q.push_back(i);
    }
    cout<<a[q.front()];
