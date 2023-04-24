#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> pascal(int n)
{
   vector<vector<int>>p(n);
   for(int i=0;i<n;i++)
   {
       p[i].resize(i+1);
       for(int j=0;j<=i;j++)
       {
           if(j==0 || j==i)
           p[i][j]=1;
           else
           p[i][j]=p[i-1][j]+p[i-1][j-1];
       }
   }
   return p;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ans;
    ans=pascal(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            std::cout << ans[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
