#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int>> v)

{
    cout<<"Size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second;
    
    }
    cout<<endl;
}
int main ()
{
    vector<pair<int,int>> v;
    printvec(v);
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    cout<<"Enter x and y"<<endl;
    int x,y;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    v.push_back({x,y});
    }
 printvec(v);
}