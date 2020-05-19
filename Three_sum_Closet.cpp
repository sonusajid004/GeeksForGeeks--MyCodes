int threeSumClosest(vector<int> v, int target) {
    // Your code goes here
    sort(v.begin(),v.end());
    int res = 0,diff = INT_MAX;
    for(int i=0;i<(int)v.size()-1;i++)
    {
        int tem =v[i];
        int l = i+1,r = (int)v.size() - 1;
        while(l<r)
        {
            int tem,flag =0,b=0;
            tem = abs(target- (v[l]+v[r]+v[i]));
            if(tem == diff)
                flag = 1,b=1;
            if(tem<diff)
                 diff =tem,b=1;
            if((b==1)&&(flag==0 || ((v[l]+v[r]+v[i]>res))))
            {
                 res = v[l]+v[r]+v[i];
            }
            if((v[l]+v[r]+v[i]<=target))
            l++;
            else r--;
        }
        
    }
    return res;
}
