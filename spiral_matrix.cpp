class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> v;
        if(m.size()==0)
            return v;
        int l =0,r=m[0].size()-1,t=0,b=m.size()-1;
        while(l<=r && t<=b)
        {
            for(int i=l;i<=r;i++)
            {
                v.push_back(m[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                v.push_back(m[i][r]);
            }
            r--;
            if(t<=b)
            {
                for(int i = r;i>=l;i--)
                    v.push_back(m[b][i]);
            }
            b--;
            if(l<=r)
            {
                for(int i = b;i>=t;i--)
                    v.push_back(m[i][l]);
            }
            l++;
        }
        return v;
        
    }
  
};
