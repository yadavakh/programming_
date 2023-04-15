#include "bits/stdc++.h"
using namespace std;

void printvec(vector<string> &a)
{
    cout<<"size:"<<a.size()<<endl;
 for (int i=0;i<a.size();i++){
     cout<<a[i]<<endl;
 }   
 a.push_back("fhien");
}

int main(){
  
    vector<string> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    vector <string> &t=a;
    t.push_back("fygvu");
    printvec(a);
    printvec(a);
    cout<<"............."<<endl;
    printvec(t);
}
