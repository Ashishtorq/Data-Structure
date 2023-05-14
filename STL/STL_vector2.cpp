#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)

{
    cout<<"Size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    
    }
    cout<<endl;
}
int main()
{
 vector<int> v(10,8);
 v.push_back(7);
  v.pop_back();
 printvec(v);
 vector<int> &v2 = v;
 v2.push_back(10);
 printvec(v2);
 
  
}