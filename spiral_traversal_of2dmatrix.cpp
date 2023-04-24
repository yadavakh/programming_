#include "bits/stdc++.h"
using namespace std;

void spiral(vector<vector<int>> &v)
{
    int left=0;
    int right=v[0].size()-1;
    int top=0;
    int bottom=v.size()-1;
    
    int d=0;
    
    if(d==0)
    while(left<=right && top<=bottom)
    {
        if(d==0)
        {
            for(int col=left;col<=right;col++)
            {
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        else if(d==1)
        {
            for(int row=top;row<=bottom;row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        else if(d==2)
        {
            for(int col=right;col>=left;col--)
            {
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        else
        {
            for(int row=bottom;row>=top;row--)
            {
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        d=(d+1)%4;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    spiral(v);
    return 0;
    
}
