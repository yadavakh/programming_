#include "bits/stdc++.h"
using namespace std;

int findmaxrow(vector<vector<int>>&v)
{
    int maxrow=-1;
    int maxone=INT_MIN;
    int col=v[0].size();
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
         if(v[i][j]==1)
         {
             int noofones=col-j;
             if(noofones>maxone)
             {
             maxone=noofones;
             maxrow=i;
             }
             break;
         }
        }
    }
    return maxrow;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int ans=findmaxrow(v);
    cout<<ans;
    return 0;
}
